#include<iostream>
using namespace std;
int main(){
	int arr[100],size,element,choice,einsert,ein,edel,upin,eup;
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
    for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	cout<<"\nenter a choice";
	cin>>choice;
	switch(choice){
		case 1:{
		int temp;
		cout<<"enter the element you want to insert and the index";
		cin>>einsert;
		cin>>ein;
		size++;
		for(int i=size-1;i>=ein-1;i--){
			arr[i+1] = arr[i];
		}
		arr[ein-1] = einsert;
		for(int i=0;i<size;i++){
		cout<<arr[i];
	}
		break;
	}
		case 2:{
		cout<<"enter the index at which you want to delete the element";
		cin>>edel;
		size--;
		for(int i=0;i<size;i++){
			if(i==edel){
				arr[i]=arr[i+1];
			}
		}
    for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	break;
}
	case 3:{
	int temp;
	cout<<"enter the value you want to update with and the index ";
	cin>>eup;
	cin>>upin;
	temp = eup;
	arr[upin] = temp;
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	break;
}
    case 4:{
    	int num,flag=0,i;
    	cout<<"enter the number you want to search ";
    	cin>>num;
    	for(i=0;i<size;i++){
    		if(arr[i]==num){
    			flag=1;
    			break;
    		}
    	}
    	if(flag==1){
    		cout<<"found at "<<i;
    	}
    	else
    		cout<<"not found ";
    	break;
    }



}
}