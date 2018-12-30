#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int p = l,q = m+1,k=0;
    int A[r-l+1];
    for(int i=0;i<=r;i++){
        if(p>m)
            A[k++] = arr[q++];
        else if(q>r)
            A[k++] = arr[p++];
        else if(arr[p]<arr[q])
            A[k++] = arr[p++];
        else
            A[k++] = arr[q++];
    }
    for(int i=0;i<k;i++)
        arr[l++] = A[i];
}
void mergeSort(int arr[],int l, int r){
    int mid;
    if(l<r){
        mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Entered array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,n-1);
    cout<<endl<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}