using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
};
tree *insert(tree *root,int data)
{
    if(root==NULL)
    {
        tree *temp=new tree;
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    else if(data>root->data)
        root->right=insert(root->right,data);
    else if(data<root->data)
        root->left=insert(root->left,data);
    return root;
}
tree *findmin(tree *root)
{
    if(root==NULL)
      return NULL;
    if(root->left)
      return findmin(root->left);
    else 
      return root;
}
tree *delete1(tree *root,int data)
{
    if(root==NULL)
      return root;
    else if(data>root->data)
      root->right=delete1(root->right,data);
    else if(data<root->data)
      root->left=delete1(root->left,data);
    else
    {
        tree *temp=new tree;
        if(root->right==NULL)
        {
            temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL)
        {
            temp=root->right;
            delete root;
            return temp;
        }
        temp=findmin(root->right);
        root->data=temp->data;
        root->right=delete1(root->right,temp->data);
    }
    return root;
}
void preorder(tree *root)
{
    if(root==NULL)
      return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
bool search(tree *root,int data)
{
    while(root!=NULL)
    {
        if(data>root->data)
          root=root->right;
        else if(data<root->data)
          root=root->left;
        else 
          return true;
    }
    return false;
}
int main()
{
    struct tree *root=NULL;
    int n,r,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        root=insert(root,value);
    }
    cin>>r;
    for(int i=0;i<r;i++)
    {
        cin>>value;
        int a=search(root,value);
        if(a==1)
        {
            root=delete1(root,value);
        }
        else
           cout<<"No such element is in the tree"<<endl;
    }
    preorder(root);
    return 0;
}