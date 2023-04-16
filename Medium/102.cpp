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
    vector<vector<int>> levelOrder(TreeNode *root){
        vector<vector<int>> result;
        if(!root) return result;

        vector<TreeNode *> curr;
        vector<TreeNode *> next;
        curr.push_back(root);

        while(!curr.empty()){
            vector<int> temp;           
            for(TreeNode *node : curr){
                temp.push_back(node->val);
                if(node->left) next.push_back(node->left);
                if(node->right) next.push_back(node->right);
            }
            result.push_back(temp);
            curr = next;
            next = {};
        }

        return result;
    }
};

int main(){
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    for(auto vec : Solution().levelOrder(root)){
        for(auto num : vec) cout << num;
        cout << endl;
    }

    return 0;
}