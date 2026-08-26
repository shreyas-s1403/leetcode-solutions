class Solution {
public:
    bool check(TreeNode* node, long long minVal, long long maxVal) {
        if (node == NULL)
            return true;

        if (node->val <= minVal || node->val >= maxVal)
            return false;

        return check(node->left, minVal, node->val) &&
               check(node->right, node->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};