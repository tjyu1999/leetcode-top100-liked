# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int cnt = 0;
        int major = 0;

        for(auto num : nums){
            if(cnt == 0) major = num;
            if(num == major) cnt += 1;
            else cnt -= 1;
        }

        return major;
    }
};

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int major = Solution().majorityElement(nums);
    cout << major << endl;

    return 0;
}