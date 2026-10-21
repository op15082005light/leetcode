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
 void sum(TreeNode* root ,int s,int t,bool & a){
if(root==nullptr)return;
 if(a)return;
s+=root->val;
 if(s==t && root->left==nullptr && root->right==nullptr){
    a=true;
    return ;
}
sum(root->left,s,t,a);
sum(root->right,s,t,a);




 }
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool a=false;
        int s=0;
sum(root,s,targetSum,a);

return a;

    }
};