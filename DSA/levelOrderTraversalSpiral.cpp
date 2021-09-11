vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> v; 
    if(root==NULL) return v;
    queue<Node*> q;
    q.push(root);
    int j = 1;
    while(q.empty()==false) {
        int c = q.size();
        vector<int> t;
        for(int i = 0; i < c; i++) {
            Node* temp = q.front();
            q.pop();
            t.push_back(temp->data);
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
        if(j>1 && j%2!=0) {
            reverse(t.begin(), t.end());
        }
        int k = t.size();
        for(int i = 0; i < k; i++) {
            int x = t[i];
            v.push_back(x);
        }
        j++;
    }
    return v;
}
