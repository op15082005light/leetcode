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
    void leftmost(TreeNode* root,int i,int & h,int &ans){
        if(root==nullptr)return ;
        if(root->left==nullptr && root->right==nullptr){
            if(i>h){
        h=i;
        ans=root->val;
        }}
        

        leftmost(root->left,i+1,h,ans);
      
        leftmost(root->right,i+1,h,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int lenght=0;
        int ans=root->val;
        leftmost(root,0,lenght,ans);
        return ans;
    }
};