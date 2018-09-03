#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};

node *front=NULL,*rear=NULL;
void push(int ele){
  node *temp = new node;
  temp->data = ele;
  temp->next = NULL;
  if(front==NULL && rear == NULL)
  {
    front=rear=temp;
  }
    rear->next = temp;
    rear = temp;
   rear->next = NULL;
}

void pop(){
  int x;
  node *temp = front;
  x = temp->data;
  if(front==NULL)
  {cout<<"Queue is empty\n";
  return;}
  else if(front==rear)
  front=rear=NULL;
  else front = front->next;
  delete(temp);
  //return (x);
}

void display(){
  node *temp = front;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

int main(){
  int s,ele,choice;
    cout<<"1 : insert"<<endl<<"2 : delete"<<endl<<"3 : display";
while(1){
  cout<<"enter the choice: "<<endl;
  cin>>choice;
  switch(choice){
    case 1:{
      cout<<"enter the element you want to insert"<<endl;
      cin>>ele;
      push(ele);
      break;
    }
    case 2:{
    pop();
      break;
    }
    case 3:{
      display();
      break;
    }
  }
}
  return 0;
}
