# include<iostream>
# include<vector>
# include<unordered_map>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++){
            if(map.count(target - nums[i])) return {map[target - nums[i]], i};
            map[nums[i]] = i;
        }

        return {};
    }
};

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    for(auto i: Solution().twoSum(nums, target)) cout << i << endl;
}