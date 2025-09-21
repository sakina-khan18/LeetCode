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
void leaf(TreeNode* root,map<int,map<int,multiset<int>>> &m,int i,int j)
{
    if(root==nullptr)
    return ;
    m[i][j].insert(root->val);
    leaf(root->left,m,i-1,j+1);
    leaf(root->right,m,i+1,j+1);
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> m;
        leaf(root,m,0,0);
        vector<vector<int>> v;
        for(auto p:m)
        
        {
           vector<int> v1;
           for(auto q:p.second)
           {
            v1.insert(v1.end(),q.second.begin(),q.second.end());
           }
           v.push_back(v1);

        }
        return v;
    }
};