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
    
    bool solve(TreeNode* root,vector<int> a,int i){
        if(root==NULL){
            return false;
        }
        
        if(a[i]!=root->val)return false;
        
        if(i+1==a.size())
        return (root->left==NULL) && (root->right==NULL);
        
        return solve(root->left,a,i+1) || solve(root->right,a,i+1);
       
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return solve(root,arr,0);
    }
};
