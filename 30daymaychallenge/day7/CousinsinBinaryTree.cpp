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
    int dx=0;
    int dy=0;
    TreeNode* px=NULL;
    TreeNode* py = NULL;
    void dfs(TreeNode* root,int depth,int x,int y){
        if(!root)return;
        
        if(root->left){
            if(root->left->val==x){
                px= root;
                dx=depth;
            }
            else if(root->left->val==y){
                py=root;
                dy=depth;
            }
        }
        if(root->right){
           if(root->right->val==x){
                px= root;
                dx=depth;
            }
            else if(root->right->val==y){
                py=root;
                dy=depth;
            } 
        }
        if(dx!=0 && dy!=0){
            return;
        }
        dfs(root->left,depth+1,x,y);
        dfs(root->right,depth+1,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        dfs(root,0,x,y);
        if(dx==0 && dy==0){
            return false;
        }
        else{
            if(dx==dy && px!=py){
                return true;
            }
        }
        return false;
    }
};
