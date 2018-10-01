#include<iostream>
using namespace std;
int main(){
    int size,key;
    cin>>size;
    int arr[size] ={0};
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int j=1;j<size;j++){
        key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1] = arr[i];
            i--;
            arr[i+1] = key;
        }
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}