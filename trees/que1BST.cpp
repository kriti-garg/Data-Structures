#include<iostream>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    
}*root;
class bst{
    public:
    void insertion(node *&ptr,int num)
    {
        if(ptr==NULL)
        {
            node *nn=new node();
            nn->data=num;
            nn->left=NULL;
            nn->right=NULL;
            ptr=nn;
        }
        else
        {
            if(ptr->data>num)
            {
                if(ptr->left!=NULL)
                {
                    insertion(ptr->left,num);
                }
                else
                {
                  node *nn=new node();
                  nn->data=num;
                  nn->left=NULL;
                  nn->right=NULL;
                  ptr->left=nn;
                  
                }
                
            
        }
        else if(ptr->data<num)
        {
            if(ptr->right!=NULL)
            {
                insertion(ptr->right,num);
            }
            else{
                node *nn=new node();
                nn->data=num;
                nn->left=NULL;
                nn->right=NULL;
                ptr->right=nn;
                
            }
        }
    }
    }
    node *deletion(node *ptr,int key)
    {
        if(ptr==NULL)
        {
            
            
            cout<<"Node not found"<<endl;
            return ptr;
            
            
        }
        else if(key<ptr->data)
        {
            ptr->left=deletion(ptr->left,key);
        }
        else if(key>ptr->data)
        {
            ptr->right=deletion(ptr->right,key);
        }
        else
        {
          if(ptr->left==NULL&&ptr->right==NULL)
          {
              delete(ptr);
              ptr=NULL;
              return ptr;
          }
          else if(ptr->left==NULL)
          {
              struct node *temp;
              temp=ptr;
              ptr=ptr->right;
              delete(temp);
          }
          else if(ptr->right==NULL)
          {
              struct node *temp;
              temp=ptr;
              ptr=ptr->left;
              delete(temp);
          }
          else
          {
              node *succ=inordersucc(ptr->right);
              ptr->data=succ->data;
              ptr->right=deletion(ptr->right,succ->data);
          }
          
        }
        return ptr;
    }
    node *inordersucc(node *ptr)
    {
        while(ptr->left!=NULL)
        {
            ptr=ptr->left;
            
        }
        return ptr;
        
    }
    void inorder(node *ptr)
    {
        if(ptr==NULL)
        {
            return;
        }
        else
        {
            inorder(ptr->left);
            cout<<ptr->data<<endl;
            inorder(ptr->right);
        }
    }
};
int main(){
    bst b;
    int n,d,num,num1;
    root=NULL;
    cin>>n;
    if(n>0)
    {
    for(int i=0;i<n;i++)
    {
        cin>>num;
        b.insertion(root,num);
    }
   
    cin>>d;
    for(int i=0;i<d;i++)
    {
        cin>>num1;
       root=b.deletion(root,num1);
    }
       b.inorder(root);
    }
    else
    {
        cout<<"Tree is empty";
    }
}

/* #include<iostream>
using namespace std;
struct node
{
    node *left;
    node *right;
    int data;
};
class bst
{public:
    node *insert(node* root,int val)
    {
        if(root==NULL)
        {
            node *temp=new node();
            temp->data=val;
            temp->left=NULL;
            temp->right=NULL;
            root=temp;
        }
        else
        {
            if(val>root->data)
            {
               root->right=insert(root->right,val);
            }
            else if(val<root->data)
            {
                root->left=insert(root->left,val);
            }
        }
        return root;
    }
    void inorder(node *ptr)
    {
       if(ptr==NULL)
       return;
       else
       {
           inorder(ptr->left);
           cout<<ptr->data<<endl;
           inorder(ptr->right);
       }
    }
    node* deleteNode(node *ptr,int val)
    {
        if(ptr==NULL)
        {
        return ptr;
        
        }
        else if(val<ptr->data)
      {
        ptr->left=deleteNode(ptr->left,val);
        }
        
        else if(val>ptr->data)
        {
        ptr->right=deleteNode(ptr->right,val);
        
        }
        
        else
        {
         if(ptr->right==NULL && ptr->left==NULL )
         {
             delete ptr;
             ptr=NULL;
             return ptr;
         }
         else if(ptr->right==NULL)
         {
             node *temp=ptr;
             ptr=ptr->left;
             delete temp;
             return ptr;
         }
         else if(ptr->left==NULL)
         {/cout<<"hi";
             node *temp=ptr;
             ptr=ptr->right;
             //cout<<"data of ptr"<<ptr->data;
             delete temp;
             return ptr;
         }
         else
         {
             node *succ= inordersucc(ptr->right);
             ptr->data=succ->data;
             ptr->right=deleteNode(ptr->right,succ->data);
         }
        }
        }
        
    
    node *inordersucc(node *ptr)
    {
        while(ptr->left!=NULL)
        ptr=ptr->left;
        return ptr;
    }
    
};

int main()
{
    bst t;
    struct node *root=NULL;
    int i,j,k;
    cin>>k;
    for(i=0;i<k;i++)
    {cin>>j;
    root=t.insert(root,j);
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>j;
        if(root==NULL)
        {
        //cout<<"Tree is empty";
        //break;
        }
        else
        root=t.deleteNode(root,j);
    }
    t.inorder(root);
}
 */