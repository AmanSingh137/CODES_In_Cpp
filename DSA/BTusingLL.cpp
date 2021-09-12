void convert(Node *head, TreeNode *&root) {
    // Your code here
    queue<TreeNode*> q;
    if(head==NULL) {
        root=NULL;
        return;
    }
    root = new TreeNode(head->data);
    q.push(root);
    head = head->next;
    while(head) {
        TreeNode *p = q.front();
        q.pop();
        TreeNode *l=NULL, *r=NULL;
        l = new TreeNode(head->data);
        q.push(l);
        head = head->next;
        if(head!=NULL) {
            r = new TreeNode(head->data);
            q.push(r);
            head=head->next;
        }
        p->left = l;
        p->right = r;
    }
}
