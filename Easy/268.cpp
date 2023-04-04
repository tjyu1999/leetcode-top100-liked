# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto num : nums) sum += num;

        return (1 + nums.size()) * nums.size() / 2 - sum;
    }
};

int main(){
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << Solution().missingNumber(nums) << endl;

    return 0;
}