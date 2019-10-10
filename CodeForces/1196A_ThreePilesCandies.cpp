#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  long long int query,a,b,c,sum=0;
  cin>>query;
  while(query--){
    cin>>a>>b>>c;
    sum = a+b+c;
    if(sum%2==0)
      cout<<sum/2<<endl;
    else
      cout<<(sum-1)/2<<endl;
  }
  return 0;
}

