#include<iostream>
using namespace std;
int main(){
    int size,min_idx;
    cin>>size;
    int arr[size] ={0};
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int i=0;i<size;i++){
        min_idx = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx])
            min_idx = j;
            int temp;
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}