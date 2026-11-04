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
 int find(vector<int>& in ,int t){
    for(int i=0;i<in.size();i++){
        if(in[i]==t)return i;
    }return -1; 
 }

class Solution {
public:
TreeNode* solve(vector<int> & pre ,vector<int>in , int n, int p ,int s,int e ){
    //base case
if( p>=n ||s>e){return NULL;
}
  
 TreeNode* ans=new TreeNode(pre[p]);
int f=find(in ,pre[p]);
 ans->left=solve(pre, in ,n,p+1 ,s ,f-1);
 ans->right=solve(pre, in ,n,p-s+f+1 , f+1,e);
return ans;
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
int n=inorder.size();
        return solve(preorder,inorder,n,0,0,n-1);
    }
};