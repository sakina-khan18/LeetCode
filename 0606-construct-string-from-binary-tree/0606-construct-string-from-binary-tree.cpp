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

     string tr(TreeNode* root)
     {
        if(root==NULL)
        return "";
        string res=to_string(root->val);
        if(root->left)
        {
            res+="("+tr(root->left)+")";
            
           
            
        }
        else
        if(root->right!=NULL)
        {
            res+="()";
            
        }
        if(root->right)
        {
            res+="("+tr(root->right)+")";
        }

        return res;

        
     }
    string tree2str(TreeNode* root) {
        string t=tr(root);
        return t;
    }
};