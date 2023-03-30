# include<iostream>
# include<vector>
# include<unordered_set>
using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int> result;

        for(auto num : nums){
            if(result.count(num)){
                return true;
            }
            else{
                result.insert(num);
            }
        }
        return false;
    }
};

int main(){
    vector<int> nums = {1, 2, 3, 1};
    cout << Solution().containsDuplicate(nums) << endl;

    return 0;
}