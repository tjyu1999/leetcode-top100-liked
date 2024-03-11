class Solution{
public:  
    vector<vector<int>> subsets(vector<int> &nums){
        vector<vector<int>> res;
        dfs(nums, 0, {}, res);
        
        return res;
    }

private:
    void dfs(const vector<int> &nums, int depth, vector<int> &&path, vector<vector<int>> &res){
        res.push_back(path);
        for(int i = depth; i < nums.size(); ++i){
            path.push_back(nums[i]);
            dfs(nums, i + 1, move(path), res);
            path.pop_back();
        }
    }
};
