#include <iostream>
#include <queue>
using namespace std;
struct node{
  int data;
  node *next;
};
node *head = NULL;
void insertEnd(){
  node* temp = new node();
  cin>>temp->data;
  temp->next = NULL;
  node *t = head;
  if(t==NULL)
    head = temp;
  else{
   while(t->next!=NULL)
     t = t->next;
     t->next = temp;
  }
}

void reverseList(){

        // Initialize current, previous and next pointers 
        node *current = head; 
        node *prev = NULL, *next = NULL; 
        if(current==NULL)
          cout<<"List is empty";
        else{
        while (current != NULL){ 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
          }
        }
  
        head = prev; 

}
void deleteEnd(){
 node* t = head;
  if(t==NULL)
  cout<<"List is empty";
  else{
   while(t->next && t->next->next!=NULL)
     t = t->next;
    delete(t->next);
    t->next = NULL;
  }
  
}
void display(){
  node *t = head;
  if(t == NULL)
    cout<<"List is empty";
  else{
   while(t!=NULL)
   {
    cout<<t->data<<" ";
     t = t->next;
   }
    cout<<endl;
  }
  
}
int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    insertEnd();
  }
  display();
  reverseList();
  display();
}