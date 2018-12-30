#include <iostream>
#include <algorithm>
using namespace std;
void calPrior(int arr[],int prior[], int n){
  int tmp[111111] = {0}; // size of this array should be equal to highest priority
  
  for(int i=0;i<111111;i++)
    tmp[i] = -1;
  
  for(int i=0;i<n;i++){
    tmp[prior[i]] = arr[i];
  }
  
  /* Ascending priority order */
  for(int i=0;i<111111;i++){
    if(tmp[i] != -1){
      cout << tmp[i] << " ";
    }
  }
  
  /* Desending priority order */
  for(int i=100000;i>=0;i--){
    if(tmp[i] != -1){
      cout << tmp[i] << " ";
    }
  }
  
  cout << endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    int prior[n];
    for(int i=0;i<n;i++){
      cin >> arr[i] >> prior[i];
    }
    calPrior(arr, prior, n);
    return 0;
}

/*
SAmple input
6
1 1
2 3
4 2
6 6
3 5
5 4
  */