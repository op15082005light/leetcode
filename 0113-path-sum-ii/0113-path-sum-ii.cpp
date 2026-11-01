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
void sum(TreeNode* root, int t, vector<vector<int >> & ans,vector<int>&level  ){
    if(root==nullptr){
        return ;
    }
    t-=root->val;
    level.push_back(root->val);
    if(root->left == nullptr && root->right==nullptr){
        if(t==0){
ans.push_back(level);}
level.pop_back();
return ;
    }
    sum(root->left , t ,ans,level );
    
    sum(root->right , t ,ans,level );
    level.pop_back();
}

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans; 
        vector<int>level;
        if(root==nullptr){
            return ans;
        }
        
        sum(root , targetSum ,ans,level);
        return ans;




    }
};