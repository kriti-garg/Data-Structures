#include<iostream>
#include<queue>
using namespace std;


void display(priority_queue <int> g){
  while(!g.empty()){
    cout<<" "<<g.top();
    g.pop();
  }
  cout<<endl;
}


int main(){
  int choice,temp;
  priority_queue <int> queue;
	cout<<"1 : push"<<endl<<"2 : pop"<<endl<<"3 : display"<<endl;
	while(1){
		cout<<"enter the choice";
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"enter the element you want to insert"<<endl;
				cin>>temp;
	      queue.push(temp);
        break;
			}
			case 2:{
				queue.pop();
        break;
			}
			case 3:{
			  display(queue);
        break;
			}
		}
	}
	return 0;
}
