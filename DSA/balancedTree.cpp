
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int check(Node* root) {
        if(root==NULL) return 0;
        int lh = check(root->left);
        if(lh==-1) return -1;
        int rh = check(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh) > 1) return -1;
        return max(lh, rh)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int n = check(root);
        if(n==-1) return false;
        return true;
    }
};
