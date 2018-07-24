#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
struct node *head = NULL;
void insertFront(){
	    node *temp = new node;
       
        cout<<"enter the value you want to insert";
        cin>>temp->data;
        temp->prev=NULL;
        temp->next = NULL;
        if(head==NULL){
            head = temp;
        }
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
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
        if(head==NULL){
        	cout<<"List is empty\n";
        }
        else{
        while(t->data!=val)
            t = t->next;
            temp->next=t->next;
            t->next=temp;
            temp->prev = t;
            t->next->prev=temp->prev;
        }
    }
void insertEnd(){
	 node *temp = new node;
        cout<<"enter the value you want to insert";
        cin>>temp->data;
        temp->next = NULL;
        temp->prev=NULL;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while(t->next!= NULL)
                 t =t->next;
             t->next=temp;
             temp->prev=t;
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
            t->next->prev=NULL;
            delete t; 
        }

}
void deleteMiddle(){
	int pos,count=0;
	node *ptr,*temp,*n=head;
	cout<<"enter the position";
	cin>>pos;
	while(n!=NULL){
		count++;
		n= n->next;
	}
	if(pos<=count){
	if(pos==0)
		deleteFront();
	else{
		ptr=head;
		for(int i=0;i<pos;i++){
			temp = ptr;
			ptr= ptr->next;
			if(ptr==NULL){
				cout<<"NULL value";
			}
			
		}
		temp->next = ptr->next;
		ptr->next->prev=temp;
		delete ptr;
	}
}
else
{
	cout<<"wrong position";
}


}
void deleteEnd(){
	node *t = new node();
	if(head==NULL){
		cout<<endl<<"List is empty";
	}
	else{
		node *t = head;
		while(t->next && t->next->next!=NULL)
			t= t->next;
		delete t->next;
		t->next=NULL;

	}

}
void display(){
         node* n=head;
         if(n==NULL){
            cout<<"List is Empty";
         }
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
     cout<<"1 for insertion at head"<<endl<<"2 for insertion at middle"<<endl<<"3 for insertion at end";
    cout<<endl<<"4 for deletion at head"<<endl<<"5 for deletion at middle"<<endl<<"6 for deletion at end";
    cout<<endl<<"7 for display"<<endl;
   
    while(1){
    cout<<endl<<"enter the choice"<<endl;
   
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