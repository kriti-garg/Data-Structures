#include<iostream>
using namespace std;
int size;
class queue{
public:
  queue();
  int arr[5];
  int front;
  int rear;
  void insert(int ele);
  void pop();
  void display();
};
queue::queue(){
  arr[5];
  front = -1;
  rear = -1;
}
void queue :: insert(int ele){
  static int i=0;
  if(rear>=5){
    cout<<"Overflow";
    return;
  }
  else{
  if(front==-1){
    front+=1;
    rear=0;
  }

  arr[rear] = ele;
  rear++;
}
}

void queue::pop(){
  static int i=0;
  if(front == 5){
    cout<<"underflow"<<endl;
    return;
  }
  else{
    front +=1;
  }
}
void queue::display(){
  for(int i=front;i<rear;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int s,ele,choice;
  queue obj;
    //queue();
    cout<<"1 : insert"<<endl<<"2 : delete"<<endl<<"3 : display";
while(1){
  cout<<"enter the choice: "<<endl;
  cin>>choice;
  switch(choice){
    case 1:{
      cout<<"enter the element you want to insert"<<endl;
      cin>>ele;
      obj.insert(ele);
      break;
    }
    case 2:{
      obj.pop();
      break;
    }
    case 3:{
      obj.display();
      break;
    }
  }
}
  return 0;
}
