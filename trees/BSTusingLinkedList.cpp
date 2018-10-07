#include<iostream>
using namespace std;
struct tree{
    int data;
   struct tree* left;
   struct tree* right;
};
tree* find(tree* root,int val){
    tree* temp = root;
    if(temp==NULL)
    return temp;
    else if(temp->data == val)
    return temp;
    else if(temp->data>val){
        if(temp->left==NULL)
        return temp;
        return find(temp->left,val);
    }
    else if(temp->data<val){
        if(temp->right==NULL)
        return temp;
        return find(temp->right,val);
    }
}
void insert(tree** root,int val){
    tree* place = find(*root,val);
    if(place==NULL){
        tree* start = new tree;
        start->data = val;
        start->left = NULL;
        start->right = NULL;
    }
    else if(place->data>=val){
        tree *temp=place->left;
       // temp = new tree;
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
    }
    else if(place->data<val){
        tree *temp=place->right;
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
    }
}
void inorder(tree *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(tree *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(tree *root){
     if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    int size,val,choice;
    cin>>size;
    tree *root = NULL;
    for(int i=0;i<size;i++)
    {   cin>>val;
        insert(&root,val);
    }
    //inorder(root);
    cout<<endl<<"enter the choice : "<<endl;
    cout<<"1: inorder"<<endl<<"2: preorder"<<endl<<"3: postorder"<<endl;
    while(1){
    cin>>choice;
    if(choice==1)
        inorder(root);
    else if(choice==2)
        preorder(root);
    else if(choice==3)
        postorder(root);
    }
}


