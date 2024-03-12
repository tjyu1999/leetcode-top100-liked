class Solution{
public:
    vector<int> topKFrequent(vector<int> &nums, int k){
        vector<int> res;
        unorder_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        int len = nums.size();
        
        for(auto n : nums) map[n]++;
        for(auto item : map) pq.push({item.second, item.first});
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
