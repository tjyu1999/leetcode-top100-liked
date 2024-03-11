class Solution{
public:
    int majorityElement(vector<int> &nums){
        unordered_map<int, int> cnt;
        for(int n : nums){
            cnt[n]++;
            if(cnt[n] > nums.size() / 2) return n;
        }
        
        return 0;
    }
};
