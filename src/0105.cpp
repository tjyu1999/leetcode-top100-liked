class Solution{
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
        unordered_map<int, int> map;
        for(int i = 0; i < inorder.size(); i++) map[inorder[i]] = i;
        
        return builder(preorder, 0, preorder.size() - 1,
                       inorder, 0, inorder.size() - 1, map);
    }
    
private:
    TreeNode* builder(const vector<int>& preorder, int pre_s, int pre_e,
                      const vector<int>& inorder, int in_s, int in_e, const unordered_map<int, int>& map){
        if(pre_s > pre_e) return nullptr;
        
        const int root_val = preorder[pre_s];
        const int root_index = map.at(root_val);
        const int left_size = root_index - in_s;
        TreeNode* root = new TreeNode(root_val);
        
        root->left = builder(preorder, pre_s + 1, pre_s + left_size, inorder, in_s, root_index - 1, map);
        root->right = builder(preorder, pre_s + left_size + 1, pre_e, inorder, root_index + 1, in_e, map);
        
        return root;
    }
};
