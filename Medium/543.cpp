# include<iostream>
# include<unordered_map>
# include<algorithm>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution{
public:
    int diameterOfBinaryTree(TreeNode* root){
        int d = 0;
        maxDiameter(root, d);

        return d;
    }
    
    int maxDiameter(TreeNode* root, int& d){
        if(!root) return 0;
        if(map.count(root)) return map[root];

        int l = maxDiameter(root->left, d);
        int r = maxDiameter(root->right, d);
        d = max(d, l + r);

        return map[root] = max(l, r) + 1;
    }
private:
    unordered_map<TreeNode*, int> map;
};

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << Solution().diameterOfBinaryTree(root) << endl;

    return 0;
}