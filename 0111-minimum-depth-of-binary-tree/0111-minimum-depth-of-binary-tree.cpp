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
 */int depth(TreeNode* root,int count){
    if(root==nullptr){
        return count;
    } if (root->left == nullptr) {
        return depth(root->right, count + 1);
    }

    if (root->right == nullptr) {
        return depth(root->left, count + 1);
    }

return min(depth(root->left,count+1),depth(root->right,count+1));
}

class Solution {
public:
    int minDepth(TreeNode* root) {
        int count=0;
        count=depth(root,count);
        return count;
    }
};