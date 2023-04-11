# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

class Solution{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        vector<vector<int>> results;
        long long_target = (long)target;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int left = j + 1;
                int right = nums.size() - 1;
                long temp_target = long_target - nums[i] - nums[j];

                while(left < right){
                    int sum = nums[left] + nums[right];
                    
                    if(sum == temp_target){
                        vector<int> result = {nums[i], nums[j], nums[left], nums[right]};
                        if(find(results.begin(), results.end(), result) == results.end()){
                            results.push_back(result);
                        }
                        left++;
                        right--;
                    }
                    else if(sum < temp_target) left++;
                    else if(sum > temp_target) right--;
                }
            }
        }

        return results;
    }
};

int main(){
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> results = Solution().fourSum(nums, target);
    for(int i=0; i<results.size(); i++){
        for(int j=0; j<results[i].size(); j++){
            cout << results[i][j];
        } 
        cout << endl;
    }

    return 0;
}