# include<iostream>
# include<vector>
# include<unordered_set>
using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int> record;

        for(auto num : nums){
            if(record.count(num)){
                return true;
            }
            else{
                record.insert(num);
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