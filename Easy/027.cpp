# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        int k = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                swap(nums[k], nums[i]);
                k++;
            }
        }
        for(int j=0; j<k-nums.size(); j++) nums.pop_back();

        return k;
    }
};

int main(){
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int k = Solution().removeElement(nums, val);
    for(auto num : nums) cout << num << endl;
    cout << k << endl;

    return 0;
}