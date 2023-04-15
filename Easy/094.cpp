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
    vector<int> inorderTraversal(TreeNode *root){
        vector<int> result;
        if(!root) return result;
        stack<TreeNode *> st;

        while(!st.empty() || root){
            if(root){
                st.push(root);
                root = root->left;
            }
            else{
                root = st.top();
                st.pop();
                result.push_back(root->val);
                root = root->right;
            }
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

    for(auto num : Solution().inorderTraversal(root)) cout << num << endl;

    return 0;
}