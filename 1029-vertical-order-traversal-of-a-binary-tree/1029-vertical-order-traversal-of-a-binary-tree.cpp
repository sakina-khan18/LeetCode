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

    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,map<int,multiset<int>>> m;
       queue<pair<TreeNode*,pair<int,int>>> q;
       q.push({root,{0,0}});
       vector<vector<int>> res;
       while(!q.empty())
       {
        int l=q.front().second.first;
        TreeNode* node=q.front().first;
        int r=q.front().second.second;
        q.pop();
        m[l][r].insert(node->val);
        if(node->left!=NULL)
        {
            q.push({node->left,{l-1,r+1}});
        }
        if(node->right!=NULL)
        q.push({node->right,{l+1,r+1}});

        

       }

       for(auto p:m)
        
        {
           vector<int> v1;
           for(auto q:p.second)
           {
            v1.insert(v1.end(),q.second.begin(),q.second.end());
           }
           res.push_back(v1);

        }
        return res;
    }
};