class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int dia = 0;
int height(Node* root) {
    if(root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    dia = max(dia, 1+rh+lh);
    return 1+ max(lh, rh);
}
int diameter(Node* root) {
    // code here
    int x = height(root);
    return dia;
}
};
