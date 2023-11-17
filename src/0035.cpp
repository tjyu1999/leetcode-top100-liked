#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target){
        for(int i = 0; i < nums.size(); i++) if(nums[i] >= target) return i;
        return nums.size();
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
    cout << Solution().searchInsert(nums, target) << endl;
}
