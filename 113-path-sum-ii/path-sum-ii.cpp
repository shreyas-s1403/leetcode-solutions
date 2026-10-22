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

    vector<int>path;

    void haspath(vector<vector<int>>&ans,struct TreeNode *root,int target){
        if (!root) return;
        path.push_back(root->val);
        target-=root->val;
        if (!root->right && !root->left){
            if (target==0){
                ans.push_back(path);
            }
        }
        haspath(ans,root->right,target);
        haspath(ans,root->left,target);
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        haspath(ans,root,targetSum);
        return ans;
    }
};