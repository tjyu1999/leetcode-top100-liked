#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        int res = 0;
        for(auto n: nums) res ^= n;
        
        return res;
    }
};

int main(){
    int val;
    vector<int> nums;
    
    while(cin >> val){
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << Solution().singleNumber(nums) << endl;
}
