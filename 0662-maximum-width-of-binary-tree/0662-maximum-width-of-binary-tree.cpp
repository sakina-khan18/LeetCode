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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* ,long long >> q;
        q.push({root,0});
      
        long long int ans=0;
        while(!q.empty())
        {
            int s=q.size();
              long long start=0;
        long long last=0;
        int mini=q.front().second;
            for(int i=0;i<s;i++)
            {
             long long h=q.front().second-mini;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0)
                start=h;
                if(i==s-1)
                last=h;
                if(node->left!=NULL)
                q.push({node->left,(2*h)+1});
                if(node->right!=NULL)
                q.push({node->right,(2*h)+2});
                int t=last-start+1;
                if((last-start+1)>ans)
                ans=(last-start+1);
            }
        }
        return ans;
        
    }
};