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
tree* minValueNode(tree* temp){
 tree* current = temp;
 while(current->left!=NULL)
 current = current->left;
 return current;

}
tree* deleteNode(tree* root,int val){
  if(root==NULL)
    return root;
  else if(root->data>val)
    root->left = deleteNode(root->left , val);
    else if(root->data<val)
    root->right = deleteNode(root->right , val);
    else{
      if(root->right==NULL){
        tree* temp = root->left;
        free(root);
        return (temp);
      }
      else if(root->left==NULL){
        tree* temp = root->right;
        free(root);
        return (temp);
      }
      tree* temp = minValueNode(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right , temp->data);
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
  int val,choice,de;
  tree *root = NULL;
  cout<<"enter the choice :"<<endl;
  cout<<"1: insertion"<<endl;
  cout<<"2: inorder"<<endl<<"3: preorder"<<endl<<"4: postorder"<<endl<<"5: Deletion"<<endl;
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
      else if(choice==5)
      {cin>>de;
       tree* temp = deleteNode(root,de);
       cout<<de<<" deleted"<<endl;
      }
  }
}
