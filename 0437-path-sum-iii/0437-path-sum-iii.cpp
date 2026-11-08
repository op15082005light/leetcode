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
    void path(TreeNode* root , int t ,vector<int> &p , int &count ){
        if(root==NULL)return ;
        p.push_back(root->val);

         path(root->left , t , p ,count );
         path(root->right , t , p ,count );

         long long sum=0;

         for(int i=p.size()-1;i>=0;i--){
            sum+=p[i];
            if(sum==t){
                count++;
            }
         }p.pop_back();

    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>p;
        int count =0;
         path(root , targetSum , p ,count );
         return count;
    }
};