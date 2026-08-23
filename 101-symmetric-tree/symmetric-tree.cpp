class Solution {
public:

    bool symm(TreeNode* left, TreeNode* right) {
        
        if (left == NULL && right == NULL)
            return true;
        
        if (left == NULL || right == NULL)
            return false;
        
        if (left->val != right->val)
            return false;
        
        return symm(left->left, right->right) &&
               symm(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        
        return symm(root->left, root->right);
    }
};
