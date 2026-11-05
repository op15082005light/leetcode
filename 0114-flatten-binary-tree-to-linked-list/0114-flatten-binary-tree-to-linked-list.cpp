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
 */void preorder(TreeNode* root ,vector<int>& pre){
    if(root==nullptr)return;
        pre.push_back(root->val);
    preorder(root->left, pre);
    preorder(root->right, pre);
 }
class Solution {
public:
    void flatten(TreeNode* root) {
        vector<int> pre;
        preorder(root, pre);
      auto temp=root;
        for(int i=1;i<pre.size();i++){
        temp->left=nullptr;
        temp->right=new TreeNode(pre[i]);
        temp=temp->right;
       
        }
      
    }
};