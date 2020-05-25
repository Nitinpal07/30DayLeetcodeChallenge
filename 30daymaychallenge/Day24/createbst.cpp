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
    TreeNode* createbst(vector<int> &preorder,int &i,int max){
        if(i==preorder.size()){
            return NULL;
        }
        if(preorder[i]>max){
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[i]);
        i++;
        root->left = createbst(preorder,i,root->val);
        root->right = createbst(preorder,i,max);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)return NULL;
        TreeNode* root= new TreeNode(preorder[0]);
        if(preorder.size()==1){
            return root;
        }
        int i=0;
        return createbst(preorder,i,INT_MAX);
    }
};
