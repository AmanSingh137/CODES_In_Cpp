class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> v;
      if(node==NULL) return v;
      queue<Node*> q;
      q.push(node);
      while(q.empty()==false) {
          Node* temp = q.front();
          q.pop();
          v.push_back(temp->data);
          if(temp->left!=NULL) q.push(temp->left);
          if(temp->right!=NULL) q.push(temp->right);
      }
      return v;
    }
};
