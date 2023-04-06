# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> record;
        
        for(int i=0; i < nums.size(); i++){
            if (record.count(target - nums[i])){
                return {record[target - nums[i]], i};
            }
            record[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    for(int idx:Solution().twoSum(nums, target)) cout << idx << endl;

    return 0;
}
