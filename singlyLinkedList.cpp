#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head = NULL;
    void insertEnd()
    {
    	node *temp = new node;
    	cout<<"enter the value you want to insert";
    	cin>>temp->data;
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
        	node *t = head;
        	while(t->next!= NULL)
            t =t->next;
            t->next = temp;
        }
    }
    void insertMiddle(){
    	node *temp = new node;
    	int val;
    	cout<<"enter the value you want to insert";
    	cin>>temp->data;
    	temp->next = NULL;
    	cout<<"enter the value after which you want to insert";
    	cin>>val;
    	node *t = head;
    	while(t->data!=val){
    		t = t->next;
    	}
    	temp->next = t->next;
    	t->next = temp;
    }
    void insertFront(){
    	node *temp = new node;
    	int val;
    	cout<<"enter the value you want to insert";
    	cin>>temp->data;
    	node *t = head;
    	temp->next = NULL;
    	if(head==NULL){
    		head = temp;
    	}
    	else{
    		temp=temp->next;
    		head = temp;
    	}
    }
    void deleteFront(){
    	node *t = new node();
    	if(head==NULL){
    		cout<<endl<<"List is empty";
    	}
    	else{
    		t = head;
    		head = t->next;
    		delete t; 
    	}

    }
    void deleteMiddle(){
    	node *t = new node();
    	if(head == NULL){
    		cout<<endl<<"List is empty";
    	}
    	else{
    		
    		
    	}
    		

    }
    void deleteEnd(){

    }
    void display(){
    	 node* n=head;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
	}
	cout<<endl;
    }
int main()
{
    int choice;
   
    while(1){
    cout<<endl<<endl<<"enter the choice"<<endl;
    cout<<"1 for insertion at head"<<endl<<"2 for insertion at middle"<<endl<<"3 for insertion at end";
    cout<<endl<<"4 for deletion at head"<<endl<<"5 for deletion at middle"<<endl<<"6 for deletion at end";
    cout<<endl<<"7 for display"<<endl<<endl;
    cin>>choice;
    switch(choice){
    	case 1:{
    		insertFront();
    		break;
    	}
    	case 2:
    	{
    		insertMiddle();
    		break;
    	}
    	case 3:
    	{
    		insertEnd();
    		break;
    	}
    	case 4:
    	{
    		deleteFront();
    		break;

    	}
    	case 5:
    	{
    		deleteMiddle();
    		break;
    	}
    	case 6:
    	{
    		deleteEnd();
    		break;
    	}
    	case 7:
    	{
    		display();
    		break;
    	}
    }
}
    
    return 0;
}