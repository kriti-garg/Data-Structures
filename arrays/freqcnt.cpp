#include <iostream>
#include <algorithm>
using namespace std;
void calFreq(int arr[],int n){
  int freq[111111] = {0}; // size of this array should be equal to the greatest element
  
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  
  int flag[111111] = {0}; // size of this array should be equal to the greatest 
  for(int i=0;i<n;i++){
    int cur = arr[i];
    if(flag[cur] == 0){
      flag[cur] = 1;
      cout << "Frequency of " << cur <<  "is " << freq[cur] << endl;
    }
  }
  
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin >> arr[i];
    calFreq(arr,n);
    return 0;
}