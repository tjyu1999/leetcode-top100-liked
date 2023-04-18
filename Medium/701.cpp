# include<iostream>
#include <vector>
#include <stack>
using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val){
        if(!root) return nullptr;

        if(root->val > val){
            if(root->left) insertIntoBST(root->left, val);
            else root->left = new TreeNode(val);
        }
        else{
            if(root->right) insertIntoBST(root->right, val);
            else root->right = new TreeNode(val);
        }

        return root;
    }   
};

int main(){
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    int val = 5;

    TreeNode *result = Solution().insertIntoBST(root, val);
    vector<int> record;
    stack<TreeNode *> st;
    st.push(root);

    while(!st.empty()){
        TreeNode *temp = st.top();
        st.pop();
        record.push_back(temp->val);

        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }

    for(auto num : record) cout << num << endl;

    return 0;
}