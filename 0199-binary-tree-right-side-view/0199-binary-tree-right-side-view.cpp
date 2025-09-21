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
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<int> v;
        q.push({root});
        vector<int> ans;
        if(root==NULL)
        return ans;
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                
            TreeNode* node=q.front();
            q.pop();
          v.push_back(node->val);
            if(node->left!=NULL)
            q.push({node->left});
            if(node->right!=NULL)
            q.push({node->right});
            }
            ans.push_back(v[v.size()-1]);
            
        }
      return ans;
        
    }
};