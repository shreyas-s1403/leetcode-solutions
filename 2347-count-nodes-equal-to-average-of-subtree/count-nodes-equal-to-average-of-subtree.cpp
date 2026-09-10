class Solution {
public:
    int count = 0;

    pair<int,int> findsum(TreeNode* node) {
        if (node == NULL)
            return {0, 0};

        auto left = findsum(node->left);
        auto right = findsum(node->right);

        int sum = left.first + right.first + node->val;
        int size = left.second + right.second + 1;

        if (sum / size == node->val)
            count++;

        return {sum, size};
    }

    int averageOfSubtree(TreeNode* root) {
        findsum(root);
        return count;
    }
};