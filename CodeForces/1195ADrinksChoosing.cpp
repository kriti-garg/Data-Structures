#include<bits/stdc++.h>
using namespace std;
int a[11111] = {0};
int main()
{
  int num,type,good=0,bad=0,sum=0,drinksets;
  cin>>num>>type;
  int arr[1111] = {0};
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    a[arr[i]]++;
  }
  
  for(int i=0;i<=type;i++)
  { 
    if(a[i]%2==0)
    {
      good += a[i];
    }
    else 
     good += 2*(a[i]/2);
  } 
  if(num%2==0)
  	drinksets = num/2;
  else
  	drinksets = num/2 + 1;
  int useddrinks = good/2;
  int remdrinks = drinksets - useddrinks;
  cout<<good + remdrinks;

}
