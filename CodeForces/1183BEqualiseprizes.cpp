#include <bits/stdc++.h>
using namespace std;
int main(){
  int num,que,k,min,max;
  cin>>que;
  for(int i=0;i<que;i++){
   cin>>num>>k;
    int arr[11111] = {0};
    for(int j=0;j<num;j++){
      cin>>arr[j];
    }
      sort(arr,arr+num);
      //for(int g=0;g<num;g++)
        //cout<<arr[g];
        //cout<<endl;
      min = arr[0];
      max = arr[num-1];
      int q  = min+k;
      int h = max-k;
      if(q>=h)
        cout<<q<<endl;
      else 
        cout<<"-1"<<endl;
  }
  return 0;
}

