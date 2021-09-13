int poster;
Node* solve(int in[], int post[], int is, int ie){
    if(is>ie) return NULL;
    //cout << poster << " ";
    Node* root = new Node(post[poster--]);
    //cout << poster << endl;
    int inside;
    for(int i = is; i <= ie; i++) {
        if(in[i]==root->data) {
            inside = i;
            break;
        }
    }
    root->right = solve(in, post, inside+1, ie);
    root->left = solve(in, post, is, inside-1);
    
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    poster=n-1;
    return solve(in, post, 0, n-1);
}
