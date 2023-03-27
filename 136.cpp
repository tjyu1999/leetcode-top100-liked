# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        int result = 0;
        for (auto num : nums){
            result ^= num;
            cout << result << endl;
        }

        return result;
    }
};

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << Solution().singleNumber(nums);

    return 0;
}