# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums){
        int res;
        int cnt = 0;

        for(auto n: nums){
            if(cnt == 0) res = n;
            if(n == res) cnt++;
            else cnt--;
        }

        return res;
    }
};

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << Solution().majorityElement(nums);
}