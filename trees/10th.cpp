#include<iostream>
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
void findpresuc(tree *root,tree *pre,tree *suc,int key)
{
    if(root==NULL)
      return;
    if(root->data==key)
    {
        if(root->left!=NULL)
        {
            tree *temp=root->left;
            while(temp->right)
              temp=temp->right;
            pre=temp;
        }
        if(root->right!=NULL)
        {
            tree *temp=root->right;
            while(temp->left)
              temp=temp->left;
            suc=temp;
        }
        return;
    }
    if(root->data>key)
    {
        suc=root;
        findpresuc(root->left,pre,suc,key);
    }
    else
    {
        pre=root;
        findpresuc(root->right,pre,suc,key);
    }
}
int main()
{
    struct tree *root=NULL;
    struct tree *pre=NULL,*suc=NULL;
    int n,r,value,key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        root=insert(root,value);
    }
    cin>>key;
    findpresuc(root,pre,suc,key);
    if (pre != NULL) 
      cout << "predecessor :" << pre->data << endl; 
    else
      cout << "No Predecessor"; 
    if (suc != NULL) 
      cout << "successor :" << suc->data; 
    else
      cout << "No Successor"; 
    return 0;
}