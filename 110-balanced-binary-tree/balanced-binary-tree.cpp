/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int height(struct TreeNode *node){
        if (node==NULL) return 0;
        return 1+max(height(node->left),height(node->right));
    }

    bool isBalanced(TreeNode* root) {
        if (root==NULL) return true;
        int ans1=0,ans2=0;
        ans1=height(root->left);
        ans2=height(root->right);
        if (abs(ans1-ans2)<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;
    }
};