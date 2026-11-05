
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
    void flatten(TreeNode* root) {

        TreeNode* curr = root;

        while(curr != nullptr) {

            if(curr->left != nullptr) {

                TreeNode* prev = curr->left;

                // Find rightmost node of left subtree
                while(prev->right != nullptr) {
                    prev = prev->right;
                }

                // Connect original right subtree
                prev->right = curr->right;

                // Move left subtree to right
                curr->right = curr->left;
                curr->left = nullptr;
            }

            curr = curr->right;
        }
    }
};