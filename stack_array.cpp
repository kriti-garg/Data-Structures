#include<iostream>
#include<cstdlib>
#define MAX 100;
using namespace std;
class Stack{
private:
	int arr[100];
	int size;
	static int top;
public:
	Stack(int size){
		this->size=size;
	}
	void push(int);
	void pop();
	void display();
};
int Stack::top=-1;
void Stack::push(int val){
	if(top==size-1){
		cout<<"overflow"<<endl;
	}
	else{
		top++;
		arr[top]=val;
		}
	}
void Stack::pop(){
	if(top==-1)
		cout<<"underflow";
	else{
		int y;
		y=arr[top];
		top--;
	    cout<<"value popped is "<<y<<" ";
	}
	cout<<endl;

}
void Stack::display(){
	if(top==-1)
		cout<<"stack is empty";
	else{
	for(int i=0;i<=top;i++){
		cout<<arr[i];
	}
}
}

int main(){
	int choice,size,val;
	cout<<"enter the size of the stack";
	cin>>size;
	Stack obj(size);
	cout<<"1 for push"<<endl<<"2 for pop"<<endl<<"3 for display"<<endl<<"4 for exit";
	while(1){
	cout<<endl<<"enter the choice";
	cin>>choice;
	switch(choice){
		case 1:{
			cout<<"enter the value to be pushed";
			cin>>val;
			obj.push(val);
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
		case 4:{
			exit(0);
			break;
		}
	}
}
}