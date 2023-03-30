# include<iostream>
# include<vector>
# include<unordered_set>
using namespace std;

class Solution{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        unordered_set<int> record(nums1.begin(), nums1.end());
        unordered_set<int> result;

        for(auto num : nums2){
            if(record.count(num)){
                result.insert(num);
            }
        }

        return vector<int>(result.begin(), result.end());
    }
};

int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    for (int idx:Solution().intersection(nums1, nums2)){
        cout << idx << endl;
    }

    return 0;
}