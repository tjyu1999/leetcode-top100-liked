# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

class Solution{
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> results;
        int left, right, diff;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-2; i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i - 1] == nums[i]) continue;

            left = i + 1;
            right = nums.size() - 1;
            diff = -nums[i];

            while(left < right){
                if(nums[left] + nums[right] == diff){
                    results.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    while(left < right && nums[left - 1] == nums[left]) left++;
                    right--;
                }
                else if(nums[left] + nums[right] < diff) left++;
                else right--;
            }
        }

        return results;
    }
};

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> results = Solution().threeSum(nums);
    for(int i=0; i<results.size(); i++){
        for(int j=0; j<results[i].size(); j++){
            cout << results[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}