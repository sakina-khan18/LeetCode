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
    int countNodes(TreeNode* r) {
        if(r==NULL)
        return 0;
        queue<TreeNode*> q;
        q.push(r);
        int count=0;
        while(!q.empty())
        {
            int s=q.size();
            count+=s;
            for(int i=0;i<s;i++)
            {
                TreeNode* root=q.front();
                q.pop();
         if(root->left!=NULL)
                {
                    q.push(root->left);
                
                }
                if(root->right!=NULL)
                {
                    q.push(root->right);
                    
                }
                
            }
        }
        return count;
        
    }
};