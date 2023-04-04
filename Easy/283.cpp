# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int k = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[k], nums[i]);
                k++;
            }
        }
    }
};

int main(){
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution().moveZeroes(nums);
    for(auto num : nums) cout << num << endl;

    return 0;
}