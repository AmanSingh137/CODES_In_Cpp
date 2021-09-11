class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     // Add your code here
     if(root==NULL) return 1;
     if(root->left==NULL && root->right==NULL) return 1;
     int t = root->data;
     if(root->left!=NULL) t-=root->left->data;
     if(root->right!=NULL) t-=root->right->data;
     if(t==0) return (isSumProperty(root->left)&isSumProperty(root->right));
     return 0;
    }
};
