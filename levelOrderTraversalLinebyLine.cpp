vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>> v;
  queue<Node*> q;
  if(node==NULL) return v;
  q.push(node);
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
      v.push_back(t);
  }
  return v;
}
