#include<iostream>
using namespace std;
int t=1,s=1,tree[100],size;
int search(int s,int num){
	if(t==1){
		cout<<"no element int tree";
		return -1;
	}
	if(tree[s]==-1)
		return (s/2);
	if(tree[s]>num)
		search(2*s,num);
	else
		search(2*s+1,num);
}
void insert(int s,int num){
	int x;
	if(t==1)
		tree[t++] = num;
		else{
	x = search(s,num);
	if(tree[x]>num)
		tree[2*s] = num;
	else
		tree[2*x+1] = num;
	t++;
		}
}

void print(){
	for(int i=1;i<=size;i++){
		cout<<tree[i]<<" ";
	}
}
int main(){
	cout<<"Enter the size"<<endl;
	cin>>size;
	for(int i=1;i<=size;i++)
	tree[i] = -1;
	int choice,ele;
	cout<<"Choices are : "<<endl<<"1 for insertion"<<endl<<"2 for deletion";
	while(1){
		cout<<"Enter a choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"Enter the number to be inserted";
				cin>>ele;
				insert(s,ele);
				break;
			}
			case 2:{
				print();
				break;
			}
		}
	}
}
