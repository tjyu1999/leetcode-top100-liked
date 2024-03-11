class Solution{
public:
    int diameterOfBinaryTree(TreeNode *root){
        res = 0;
        maxDiameter(root);
        
        return res;
    }

private:
    int res;
    
    int maxDiameter(TreeNode *root){
        if(!root) return 0;
        
        int l = maxDiameter(root->left);
        int r = maxDiameter(root->right);
        res = max(res, l + r);
        
        return max(l, r) + 1;
    }
};
