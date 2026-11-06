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
    vector<int> rightSideView(TreeNode* root) {
         vector<int> ans;
    map<int ,int >m;
    queue<pair<TreeNode* , int>> q;
    if(root==nullptr)return ans;
    q.push(make_pair(root,0));

   while(!q.empty()){
       pair<TreeNode* ,int>temp=q.front();
       q.pop();

       int lvl= temp.second;
  if(m.find(lvl)==m.end())
       m[lvl]=temp.first->val;

       if(temp.first->right)q.push(make_pair(temp.first->right,lvl+1));
       if(temp.first->left)q.push(make_pair(temp.first->left,lvl+1));
   }

for(auto i:m){
    ans.push_back(i.second);
}
return ans;

    }
};