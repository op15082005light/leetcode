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
void getsum(TreeNode* root , int &ans , int lvl,int& maxlvl){
  if(root==nullptr){
    return; }
    if(root->left==nullptr && root->right==nullptr){
    if(lvl>maxlvl){
        maxlvl=lvl;
        ans=root->val;
    }else if(lvl==maxlvl){
        ans+=root->val;;
    }return;
  }
        getsum(root->left  ,ans ,lvl+1,maxlvl);
        getsum(root->right ,ans ,lvl+1,maxlvl);


}
    int deepestLeavesSum(TreeNode* root) {
        int ans=0;
        int maxlvl=-1;
        getsum(root ,ans,0,maxlvl);
        return ans;
    }
};