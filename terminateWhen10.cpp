/*Rahul is building a list.Being a computer programmer he makes this task intersting.The game goes like this:
He keeps on inserting the elements in the list and whenever 10 comes in the list,the element 10 and the element 
which us inserted just before is deleted or modified and there difference is again inserted into the list.
Implement the program.*/
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node * head = NULL;
	void insert(int a){
			node *temp  = new node();
			temp->data = a;
			temp->next=NULL;
		if(head==NULL){
				head = temp;
			}
		else{
			node *t = head;
			while(t->next!=NULL){
				t = t->next;
			}
			t->next = temp;
		}
	}
	void check(){
		node *temp = new node();
		node *n = head;
		while(n->next && n->next->next!=NULL){
			temp=n;
			n=n->next;
		}
		int val;
		val = n->next->data-n->data;
		cout<<endl<<val<<endl;
		delete (n->next);
		delete(temp->next);
		n->next=NULL;
		temp->next=NULL;
		insert(val);
}
	void display(){
		node *n = head;
		while(n!=NULL){
			cout<<n->data<<" ";
			n = n->next;
		}
		cout<<endl;
	}
};
int main(){
		//insert();
	node n;

	int num;
	do{
		cout<<"enter a value";
		cin>>num;
		n.insert(num);
		}while(num!=10);
		n.check();
        n.display();
    }
