#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        unordered_map<int, int> cnt;
        
        for(int n : nums) {
            cnt[n]++;
            if(cnt[n] > nums.size() / 2) return n;
        }
        return 0;
    }
};

int main(){
    vector<int> nums;
    int val;
    
    while(cin >> val){
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    cout << Solution().majorityElement(nums) << endl;
}
