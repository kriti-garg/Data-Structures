#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node* right;
};
class BST{
    node* insert(node* , int);
    void traverse(node*);
    void largest(node*);
};
node* BST::insert(node* root,int data){
    vector<int> obj;
    obj.push_back(data);
}
void BST::traverse(node* root){

}
void BST::largest(node* root){

}
int main(){
    node* root = NULL;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        root = insert(root,n);
    }
    traverse(root);
    largest(root);
}