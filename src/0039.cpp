class Solution{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target){
        vector<vector<int>> res;
        dfs(candidates, target, 0, {}, res);
        
        return res;
    }

private:
    void dfs(vector<int> &nums, int target, int depth, vector<int> &&path, vector<vector<int>> &res){
        if(target < 0) return;
        if(target == 0){
            res.push_back(path);
            return;
        }

        for(int i = depth; i < nums.size(); i++){
            path.push_back(nums[i]);
            dfs(nums, target - nums[i], i, move(path), res);
            path.pop_back();
        }
    }
};
