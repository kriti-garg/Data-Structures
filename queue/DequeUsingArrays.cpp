#include<iostream>
using namespace std;
class Deque{
public:
  int arr[100],size;
  static int front,rear;
  Deque(int size){
    this->size = size;
    front=-1;
    rear=0;
  }
  void insert_front(int ele){
    if(isFull()){
      cout<<"Overflow";
      return;
    }
    if(front==-1){
      front=0;
      rear=0;
    }
    else if(front==0)
    front=size-1;
    else
    front--;
    arr[front] = ele;
  }
  void insert_back(int ele){
    if(isFull){
      cout<<"Overflow"<<endl;
      return;
    }
    if(front==-1){
      front=0;
      rear=0;
    }
    else if(rear==size-1)
	rear = 0;
    else rear++;
	arr[rear] = ele;
  }

  void delete_front(){
    if(isEmpty()){
      cout<<"Underflow"<<endl;
      return;
    }
    if(front==rear){
      front=-1;
      rear=-1;
    }
    else if(front==size-1)
    front=0;
    else
    front++;
  }

  void delete_back(){
    if(isEmpty()){
      cout<<"Underflow"<<endl;
      return;
    }
    if(front==rear){
      front=-1;
      rear=-1;
    }
    else if(rear==0)
    rear = size-1;
    else
    rear--;
  }
  bool isFull(){
    return ((rear==size-1 && front==0)||rear+1 == front);
  }

   bool isEmpty(){
    return(front==-1);
  }

  int getFront(){
    if(isEmpty())
    {
      cout<<"Underflow"<<endl;
      return -1;
    }
    return arr[front];
  }
  int getRear(){
    if(isEmpty() || rear==-1){
      cout<<"Underflow"<<endl;
    }
    return arr[rear];
  }
};
int Deque :: front=-1;
int Deque :: rear =-1;
int main(){
  int size,choice;
  cout<<"enter the size"<<endl;
  cin>>size;
  Deque queue(size);
  cout<<"1 : insert_front"<<endl<<"2 : insert_back"<<endl<<"3 : delete_front"<<endl<<"4 : delete_back"<<endl<<"5 : get_front"<<endl<<"6 : get_rear"<<endl;
	while(1){
		cout<<"enter the choice";
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"enter the element you want to insert"<<endl;
        int temp;
				cin>>temp;
				queue.insert_front(temp);
        break;
			}
			case 2:{
				cout<<"enter the element you want to insert"<<endl;
        int temp;
				cin>>temp;
				queue.insert_back(temp);
        break;
			}
			case 3:{
				queue.delete_front();
        break;
			}
			case 4:{
				queue.delete_back();
        break;
			}
      case 5:{
      cout<<"Front element is "<<queue.getFront()<<endl;
        break;
      }
      case 6:{
        cout<<"Rear elelemt is "<<queue.getRear()<<endl;
        break;
      }
		}
	}
}
