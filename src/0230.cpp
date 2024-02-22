class Solution{
public:
    int kthSmallest(TreeNode* root, int k){
        stack<TreeNode*> st;
        
        while(root){
            st.push(root);
            root = root->left;
        }
        
        for(int i = 0; i < k - 1; i++){
            root = st.top();
            st.pop();
            root = root->right;
            while(root){
                st.push(root);
                root = root->left;
            }
        }
        
        return st.top()->val;
    }
};
