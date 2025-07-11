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
 
    int goodNodes(TreeNode* root,int maxi=INT_MIN) {
   
if(!root)
return 0;
maxi=max(maxi,root->val);
int l=goodNodes(root->left,maxi);
int r=goodNodes(root->right,maxi);
if(root->val>=maxi)
return l+r+1;
return l+r;
        
    }
};