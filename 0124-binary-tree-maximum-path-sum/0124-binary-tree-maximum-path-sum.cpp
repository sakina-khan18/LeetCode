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
int maxi=INT_MIN;
int sum(TreeNode* root)
{
    if(root==nullptr)
    return 0;
    int l=0,r=0;
    l=max(0,sum(root->left));
 r=max(0,sum(root->right));
   
maxi=max(maxi,root->val+r+l);
return root->val+max(l,r);

}
    int maxPathSum(TreeNode* root) {
        int m=INT_MIN;
        int ans=sum(root);
        return maxi;

    }
};