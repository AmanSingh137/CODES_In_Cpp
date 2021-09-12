class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        // Your code here
        if(root==NULL) return 0;
        queue<Node*> q;
        q.push(root);
        int c = 0;
        while(q.empty()==false){
            int c1 = q.size();
            c = max(c1, c);
            for(int i = 0; i < c1; i++) {
                Node* temp = q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
        }
        return c;
    }
};
