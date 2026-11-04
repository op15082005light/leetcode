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

int  pathsum(TreeNode* root ,int &ans, int &sum){
 if(root==nullptr)return 0 ;
if(root->left==nullptr && root->right==nullptr){
    ans=max(ans,root->val);
    return root->val;
}
int ls=max(0,pathsum(root->left , ans, sum));
int rs=max(0,pathsum(root->right , ans, sum));
sum=ls+rs+root->val;

ans=max(ans,sum);

return max(ls,rs)+root->val;
}

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
int sum=0;
sum=pathsum(root,ans,sum);
return ans;
//esame pahale ek node ke liye left sum aur right sum nikal kar root ka sum nikalo, fir har node ke liye yahi karo aur agar kisi node ke liye sum ki value pachale vale node se jyada hai to use update date kar do ,esame array banane ki jarurat nahi hai ,aur tc-O(n) me hi slove ho jayegi .

    }
};