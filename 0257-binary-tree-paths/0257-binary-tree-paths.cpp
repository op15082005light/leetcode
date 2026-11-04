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
void path(TreeNode*& root , vector<string > & ans,string one){
    if(root==nullptr)return ;
        one = one+ to_string(root->val);
    if(root->left==nullptr && root->right==nullptr){
      
        ans.push_back(one);
        return ;
    }
       
    one+="->";
    path(root->left,ans ,one);
    path(root->right,ans ,one);

}

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string one="";
        vector<string> ans;
        path(root, ans, one);
        return ans;
    }
};