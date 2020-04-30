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
    TreeNode* fun(vector<int> p,int &i,int max){
        if(i==p.size()){
            return NULL;
        }
        if(p[i]>max){
            return NULL;
        }
        TreeNode* root = new TreeNode(p[i]);
        i++;
        root->left = fun(p,i,root->val);
        root->right = fun(p,i,max);
        
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)return NULL;
        
        if(preorder.size()==1)return new TreeNode(preorder[0]);
        int i=0;
        return  fun(preorder,i,INT_MAX);
    }
};
