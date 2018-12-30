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
int main()
{
    struct tree *root=NULL;
    int n,r,value,c=1;
    cin>>n;
    cin>>value;
    while(value>=0)
    {
        c++;
        root=insert(root,value);
        cin>>value;
    }
    cout<<c;
    return 0;
}