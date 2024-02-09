#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int j = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
                j++;
            }
        }
    }
};

int main(){
    int val;
    vector<int> nums;
    
    while(cin >> val){
        nums.push_back(val);
        if(cin.get() == '\n') break;
    }
    
    Solution().moveZeroes(nums);
    for(auto n: nums) cout << n << endl;

    rerturn 0;
}
