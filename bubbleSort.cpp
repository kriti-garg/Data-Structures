#include<iostream>
using namespace std;
int main(){
	int size,num,flag;
	cout<<"Enter the size of the array";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout<<"sorted array is:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"enter the number to be searched?";
	cin>>num;
	for(int i=0;i<size;i++){
		if(arr[i]==num){
			flag=i;
			break;
		}
		else flag=0;
	}
	if(flag!=-1){

			cout<<"element found at "<<flag<<endl;
	}
	else
		cout<<"element not found";

}