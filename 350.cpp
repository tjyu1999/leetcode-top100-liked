# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;

class Solution{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        unordered_map<int, int> record;
        vector<int> result;

        for(int i=0; i<nums1.size(); i++){
            record[nums1[i]] += 1; 
        }
        for(auto num : nums2){
            if(record[num] > 0){
                result.push_back(num);
                record[num] -= 1;
            }
        }

        return result;
    }
};

int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    for (int idx:Solution().intersect(nums1, nums2)){
        cout << idx << endl;
    }

    return 0;
}