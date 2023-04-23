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
    bool isSymmetric(TreeNode *root){
        if(!root) return true;
        return _isSymmetric(root->left, root->right);
    }
private:
    bool _isSymmetric(TreeNode *left, TreeNode *right){
        if(!left && !right) return true;
        else if(!left && right) return false;
        else if(left && !right) return false;
        else return _isSymmetric(left->left, right->right) and _isSymmetric(left->right, right->left);
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    
    cout << Solution().isSymmetric(root) << endl;

    return 0;
}