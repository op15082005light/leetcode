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
 void sum(TreeNode* root ,int& s){
if(root==nullptr)return ;
if(root->left!=nullptr &&root->left->left == nullptr && root->left->right==nullptr ){
s+=root->left->val;
    
}
sum(root->left , s);
sum(root->right , s);



 }
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
       int s=0;
       sum(root,s);
return s;
    }
};