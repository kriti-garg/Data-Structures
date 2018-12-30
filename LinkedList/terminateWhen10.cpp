/*Rahul is building a list.Being a computer programmer he makes this task intersting.The game goes like this:
He keeps on inserting the elements in the list and whenever 10 comes in the list,the element 10 and the element 
which us inserted just before is deleted or modified and there difference is again inserted into the list.
Implement the program.*/
#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
		static int count;
		int data;
		node *next;
		node * head = NULL;
	void insert(int a){
			node *temp  = new node();
			temp->data = a;
			temp->next=NULL;
		if(head==NULL){
				head = temp;
				count++;
				if(temp->data==10){
			cout<<"invalid input";
			exit(0);
		}
			}
	    else{
			node *t = head;
			while(t->next!=NULL){
				t = t->next;
				count++;
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
		delete (n->next);
		count--;
		if(count==0){
			cout<<endl<<val<<endl;
			exit(0);
		}
		delete(temp->next);
		count--;
		n->next=NULL;
		temp->next=NULL;
		insert(val);
}
	void display(){
		node *n = head;
		cout<<count<<endl;
		while(n!=NULL){
			cout<<n->data<<" ";
			n = n->next;
		}
		cout<<endl;
	}
};
int node::count=0;
int main(){
	node n;
	int num;
	do{
		cout<<"enter a value"<<endl;
		cin>>num;
		n.insert(num);
		}while(num!=10);
		n.check();
        n.display();
    }
