#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int search(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        
        while(left <= right){
            mid = left + (right - left) / 2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else if(nums[mid] > target) right = mid - 1;
        }
        
        return -1;
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
    
    cout << Solution().search(nums, target) << endl;
    return 0;
}
