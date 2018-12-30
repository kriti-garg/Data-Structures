#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> queue){
  deque<int> ::iterator it;
  for(it = queue.begin();it!=queue.end();it++){
    cout<<" "<<*it<<" ";
  }
}

int main(){
  int choice,temp;
  deque<int> queue;
	cout<<"1 : insert_front"<<endl<<"2 : insert_back"<<endl<<"3 : delete_front"<<endl<<"4 : delete_back"<<endl<<"5 : display";
	while(1){
		cout<<"enter the choice";
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"enter the element you want to insert"<<endl;
				cin>>temp;
				queue.push_front(temp);
        break;
			}
			case 2:{
				cout<<"enter the element you want to insert"<<endl;
				cin>>temp;
				queue.push_back(temp);
        break;
			}
			case 3:{
				queue.pop_front();
        break;
			}
			case 4:{
				queue.pop_back();
        break;
			}
      case 5:{
        display(queue);
        break;
      }
		}
	}
	return 0;
}
