#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> map;
    
        for(int i = 0; i < nums.size(); i++){
            if(map.count(target - nums[i])) return {map[target - nums[i]], i};
            map[nums[i]] = i;
        }
        
        return {};
    }
};

int main(){
    vector<int> nums;
    int val;
    int target;
    
    while(cin >> val){
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cin >> target;
    for(auto idx: Solution().twoSum(nums, target)) cout << idx << endl;
}
