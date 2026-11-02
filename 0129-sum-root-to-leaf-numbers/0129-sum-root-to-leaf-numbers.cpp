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
void sum(TreeNode* root , int &t,int s){
    if(root==nullptr)return ;
    if(root->left==nullptr && root->right==nullptr){
        s=s*10+root->val;
        t=t+s;
        return ;
    }
s=s*10+root->val;
sum(root->left,t,s);
sum(root->right,t,s);



}





class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int t=0;
        int s=0;
        sum(root, t,s );
        return t;




    }
};