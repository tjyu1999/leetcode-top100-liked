# include<iostream>
using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    TreeNode *searchBST(TreeNode *root, int val){
        if(!root) return nullptr;

        if(root->val == val) return root;
        return searchBST(val < root->val ? root->left : root->right, val);
    }
};

int main(){
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    int val = 2;

    TreeNode *result = Solution().searchBST(root, val);
    cout << result->val << endl;
    cout << result->left->val << endl;
    cout << result->right->val << endl;

    return 0;
}