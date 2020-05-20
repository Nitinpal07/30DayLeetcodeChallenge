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
    void dfs(TreeNode* root,int k,int &count,int &val){
        
        if(!root)return;
        if(val!=-1){
            return;
        }
        dfs(root->left,k,count,val);
        count++;
        if(count==k){
            val=root->val;
        }
        else
        dfs(root->right,k,count,val);
    }
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans = -1;
        int count=0;
        dfs(root,k,count,ans);
        return ans;
    }
};
