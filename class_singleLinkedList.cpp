#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *next;
	node *head = NULL;
	void insertFront(){
		node *temp = new node();
	    cout<<"enter the value you want to insert?"<<endl;
		cin>>temp->data;
		temp->next=NULL;
		if(head==NULL){
			head = temp;
		}
		else{
			node *t = head;
			temp->next = t;
			head = temp;
		}

	}
	void insertMiddle(){
		node *temp = new node();
		node *t = head;
		int val;
		cout<<"enter the value you want to insert";
		cin>>temp->data;
		temp->next=NULL;
		cout<<"enter the value after which you want to insert";
		cin>>val;
		while(t->data!=val){
			t=t->next;
		}
		temp->next=t->next;
		t->next=temp;

	}
	void insertEnd(){
		node *temp = new node();
		node *t = head;
		cout<<"enter the value you have to insert"<<endl;
		cin>>temp->data;
		temp->next = NULL;
		if(head == NULL){
			head=temp;
		}
		else{
			while(t->next!=NULL){
				t=t->next;
			}
			t->next=temp;
		}
	}
	void deleteFront(){
		node *t = head;
		if(t==NULL){
			cout<<"\nList is empty";
		}
		else{
			head=t->next;
			delete t;
		}

	}
	void deleteMiddle(){
		node *t = head;
		node *temp = new node();
		cout<<"enter the value which you want to delete";
		int val;
		cin>>val;
		if(t==NULL){
			cout<<"\nList is empty";
		}
		else{
			while(t->data!=val){
				temp=t;
				t= t->next;
			}
			temp->next=t->next;
			delete t;
		}
	}
	void deleteEnd(){
		node *t = head;
		node *temp = new node();
		if(t==NULL)
			cout<<"\nList is empty";
		else{
			while(t->next && t->next->next!=NULL){
				t=t->next;
			}
			delete t->next;
			t->next=NULL;
		}

	}
	void display(){
		node* t=head;
		if(t==NULL){
			cout<<"\nList is empty";
		}	
		
			while(t!=NULL){
				cout<<t->data<<" ";
				t= t->next;
			}
			cout<<endl;
		}

};
int main(){
	int choice;
	node n;
     cout<<"1 for insertion at head"<<endl<<"2 for insertion at middle"<<endl<<"3 for insertion at end";
    cout<<endl<<"4 for deletion at head"<<endl<<"5 for deletion at middle"<<endl<<"6 for deletion at end";
    cout<<endl<<"7 for display"<<endl;
   
    while(1){
    cout<<endl<<"enter the choice"<<endl;
   
    cin>>choice;
    switch(choice){
    	 case 1:{
            n.insertFront();
            break;
        }
        case 2:
        {
            n.insertMiddle();
            break;
        }
        case 3:
        {
            n.insertEnd();
            break;
        }
        case 4:
        {
            n.deleteFront();
            break;
        }
        case 5:
        {
            n.deleteMiddle();
            break;
        }
        case 6:
        {
            n.deleteEnd();
            break;
        }
        case 7:
        {
            n.display();
            break;
        }
    }
}
}