# include<iostream>
# include<vector>
using namespace std;

class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        for(int i=m+n-1; i>=0; i--){
            if(m == 0){
                nums1[i] = nums2[n-1];
                n--;
                continue; 
            }
            else if(n == 0) break;
            else if(nums2[n-1] >= nums1[m-1]){
                nums1[i] = nums2[n-1];
                n--;
            }
            else{
                nums1[i] = nums1[m-1];
                m--;
            }
        }
    }
};

int main(){
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    Solution().merge(nums1, m, nums2, n);
    for(auto num : nums1) cout << num << endl;

    return 0;
}