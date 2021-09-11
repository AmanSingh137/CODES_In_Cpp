class Solution {
public:
    int maxl = 0;
    void printed(TreeNode *root, int level, vector<int> &v) {
        if(root==NULL) return;
        if(maxl < level){
            v.push_back(root->val);
            maxl=level;
        }
        printed(root->right, level+1, v);
        printed(root->left, level+1, v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        printed(root, 1, v);
        return v;
    }
};
