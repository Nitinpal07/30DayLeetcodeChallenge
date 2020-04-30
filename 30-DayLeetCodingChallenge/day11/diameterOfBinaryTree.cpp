/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root,int &ans){
        if(root==NULL){
            return 0;
        }
        int l =  dfs(root->left,ans);
        int r =  dfs(root->right,ans);
        ans = max(ans,l + r);
        return max(l,r) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int ans=0;
        if(root->left==NULL && root->right==NULL)return 0;
        int temp = dfs(root,ans);
        return ans;
    }
};
