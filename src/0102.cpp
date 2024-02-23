class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode* root){
        if(!root) return {};
        
        vector<vector<int>> res;
        queue<TreeNode*> q{{root}};
        
        while(!q.empty()){
            vector<int> values;
            
            for(int n = q.size(); n > 0; n --){
                TreeNode* node = q.front();
                q.pop();
                values.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
            res.push_back(values);
        }
        
        return res;
    }
};
