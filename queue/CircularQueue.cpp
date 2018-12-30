#include<iostream>
#include<stack>
using namespace std;
int size,queue[400];
static int front=-1,rear=-1;
void push(){
  int ele;
  cout<<"Enter the element you want to insert";
  cin>>ele;
  if((front == 0 && rear == 4) || rear+1 == front)
  cout<<"Queue is full"<<endl;
  else{
    if(front == -1)
    front = rear = 0;
    else if(rear == 4)
    rear = 0;
    else rear++;
    queue[rear] = ele;
    //cout<<queue[rear]<<endl;
  }
}
void pop(){
  if(front == -1)
  cout<<"Underflow"<<endl;
  else{
    if(front == rear)
    front = -1,rear = -1;
    else if(front == 4)
    front=0;
    else
    front++;
  }
 }
void display(){
  if(front==-1)
  cout<<"queue is empty"<<endl;
  if(rear>=front){
    for(int i=front;i<=rear;i++)
    cout<<queue[i]<<" ";
  }
  else{
    for(int i=front;i<5;i++)
    cout<<queue[i]<<" ";
    for(int i=0;i<=rear;i++)
    cout<<queue[i]<<" ";
  }
}
int main(){
  int choice;
  //cout<<"enter the size of the queue"<<endl;
  //cin>>size;
  cout<<"1 : push\n2 : pop\n3 : display\n"<<endl;
  while(1){
    cout<<"enter the choice";
    cin>>choice;
    switch(choice){
      case 1:{
        push();
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
}
