class Solution {
public:
    TreeNode* build(vector<int>& preorder, map<int, int>& m, int pi, int pj,
                    int ii, int ij) {
        if (pi > pj || ii > ij)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[pi]);
        int ir = m[root->val];
        int leftSize = ir - ii;

        root->left = build(preorder, m, pi + 1, pi + leftSize, ii, ir - 1);
        root->right = build(preorder, m, pi + leftSize + 1, pj, ir + 1, ij);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> m;
        for (int i = 0; i < inorder.size(); i++)
            m[inorder[i]] = i;

        return build(preorder, m, 0, preorder.size() - 1, 0,
                     inorder.size() - 1);
    }
};
