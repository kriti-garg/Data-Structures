#include<iostream>
using namespace std;
void swap(int num1,int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
/* when first element is made as pivot */
int partition(int arr[],int low,int high){
    int i = low+1;
    int piv = arr[low];
    for(int j=low+1;j<=high;j++){
        if(arr[j]<piv){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp;
    temp = arr[i-1];
    arr[i-1] = arr[low];
    arr[low] = temp;
    return (i-1);
}
/* 
when last element is made as pivot
int partition(int arr[],int low,int high){
    int i = low-1;
    int piv = arr[low];
    for(int j=low;j<=high;j++){
        if(arr[j]<piv){
             i++;
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp;
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i+1);
}
 */

void quicksort(int arr[] , int low,int high){
    int piv;
    if(low<high){
        piv = partition(arr,low,high);
        quicksort(arr,low,piv-1);
        quicksort(arr,piv+1,high);
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<endl<<"Entered array is : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        quicksort(arr,0,size-1);
        cout<<endl<<"Sorted array is : ";
     for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}