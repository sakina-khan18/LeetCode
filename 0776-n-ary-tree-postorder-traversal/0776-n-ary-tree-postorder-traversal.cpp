/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int> v;
   void pos(Node* root)
   {
    if(root==NULL)
    return;
    for(auto p:root->children)
    {
          pos(p);
    }
    v.push_back(root->val);
   }
    vector<int> postorder(Node* root) {
        pos(root);
        return v;
    }
};