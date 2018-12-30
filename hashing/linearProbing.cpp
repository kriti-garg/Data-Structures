#include<iostream>
using namespace std;
int hash(int key,int n,int i)
{
	return ((key%n)+i)%n;
}
int linear_probe(int a[],int key,int size)
{
	int loc;
	for(int i=0;i<size;i++)
	{
		loc=hash(key,size,i);
		if(a[loc]==0)
			break;
	}
	return loc;
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<i<<"->"<<a[i]<<endl;
}
int main()
{
	int size;
	cout<<"Enter table size:";
	cin>>size;
	int table[size]={0};
	int n,key;
	cout<<"Enter the key values size:\n";
	cin>>n;
	cout<<"Enter the key values:\n";
	for(int i=0;i<n;i++)
	{
		cin>>key;
		int loc=linear_probe(table,key,size);
		table[loc]=key;
	}
	display(table,size);
}