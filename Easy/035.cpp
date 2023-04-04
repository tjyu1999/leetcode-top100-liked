# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        if(target <= nums[0]) return 0;
        for(int i=0; i<nums.size(); i++){
            if(i == nums.size() - 1) return nums.size();
            if(nums[i] == target) return i;
            else{
                if(target > nums[i] && target <= nums[i + 1]) return i + 1;
            }
        }

        return nums.size();
    }
};

int main(){
    vector<int> nums = {1};
    int target = 1;

    cout << Solution().searchInsert(nums, target) << endl;

    return 0;
}