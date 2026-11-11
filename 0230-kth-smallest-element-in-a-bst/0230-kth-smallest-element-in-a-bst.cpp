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
    void in(TreeNode* root, int& k,int & ans){
        if(root==nullptr)return;
      in(root->left,k,ans);
      k--;
      if(k==0){
        ans=root->val;
      }
      in(root->right,k,ans);
    }
class Solution {
public:

    int kthSmallest(TreeNode* root, int k) {
      int ans;
      
      in(root,k,ans);
      return ans;  
    }
};