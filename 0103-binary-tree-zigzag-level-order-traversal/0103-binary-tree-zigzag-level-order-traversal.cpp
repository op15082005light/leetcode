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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
bool zig=true;
queue<TreeNode * >q;
q.push(root);
vector<vector<int>>ans;
if(root==nullptr)return ans;
while(!q.empty()){
int size=q.size();
vector<int>level(size);
for(int i=0; i<size;i++){

auto temp=q.front();
int index=zig?i:size-i-1;
level[index]=temp->val;
q.pop();
if(temp->left)q.push(temp->left);
if(temp->right)q.push(temp->right);
}








ans.push_back(level);
zig=!zig;
}


return ans;
    }
};