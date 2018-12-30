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
int maxdepth(tree *root)
{
    if(root==NULL)
      return -1;
    int ldepth=maxdepth(root->left);
    int rdepth=maxdepth(root->right);
    if(ldepth>rdepth)
      return (ldepth+1);
    else 
      return (rdepth+1);
}
int main()
{
    struct tree *root=NULL;
    int n,r,value,c=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        root=insert(root,value);
    }
    int d=maxdepth(root);
    cout<<"Maximum Depth: "<<d;
    return 0;
}