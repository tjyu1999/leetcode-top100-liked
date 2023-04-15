#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    vector<int> preorderTraversal(TreeNode *root){
        vector<int> result;
        if(!root) return result;
        stack<TreeNode *> st;
        st.push(root);

        while(!st.empty()){
            TreeNode *temp = st.top();
            st.pop();
            result.push_back(temp->val);

            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }

        return result;
    }   
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    for(auto num : Solution().preorderTraversal(root)) cout << num << endl;

    return 0;
}