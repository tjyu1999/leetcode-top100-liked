# include<iostream>
# include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[cnt] = nums[i];
                cnt++;
            }
        }

        return cnt;
    }
};

int main(){
    vector<int> nums = {1, 1, 2};

    int cnt = Solution().removeDuplicates(nums);
    cout << cnt << endl;

    return 0;
}