#include<iostream>
using namespace std;
struct tree{
  int data;
  struct tree* left=NULL;
  struct tree* right=NULL;
};

tree* find(tree* root,int val){
  tree * temp = root;
  if(temp==NULL)
    return temp;
  
  else if(temp->data == val)
    return temp;
  
  else if(temp->data > val){
    if(temp->left==NULL)
      return temp;
    return find(temp->left,val);
  }
  
  if(temp->right==NULL)
      return temp;
  return find(temp->right,val);
}

void insert(tree ** root,int val){
  tree * place = find(*root,val);
  if(place==NULL){
    tree * start = new tree;
    start->data = val;
    start->left = NULL;
    start->right = NULL;
    *root = start;
  }
  else if(place->data>=val){
    // tree *temp=place->left;
    place->left = new tree;
    tree *temp=place->left;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
  }
  else if(place->data<val){
    place->right = new tree;
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
  int val,choice;
  tree *root = NULL;
  cout<<"enter the choice :"<<endl;
  cout<<"1: insertion"<<endl;
  cout<<"2: inorder"<<endl<<"3: preorder"<<endl<<"4: postorder"<<endl;
  
  while(1){
    cin >> choice;
    if(choice==1){
      cin >> val;
      insert(&root,val);
    }
    else if(choice==2)
      inorder(root);
    else if(choice==3)
      preorder(root);
    else if(choice==4)
      postorder(root); 
  }
}
