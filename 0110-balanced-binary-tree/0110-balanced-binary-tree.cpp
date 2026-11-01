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
 pair <bool ,int> depth(TreeNode * root){
     if(root == nullptr ){
            pair<bool , int > p=make_pair(true, 0);
            return p;
        }
        pair<bool , int > left= depth(root->left);
        pair<bool , int > right= depth(root->right);
    
bool  diff= abs(left.second - right.second)<=1;
if(left.first && right.first && diff){
    return  make_pair(true, max(left.second ,right.second)+1);
}
    return make_pair(false, max(left.second ,right.second)+1);


 }
class Solution {
public:
    bool isBalanced(TreeNode* root) {
       return depth(root).first;

    }
};