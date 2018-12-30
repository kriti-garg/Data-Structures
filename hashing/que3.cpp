#include <iostream>
#include <climits>
using namespace std;
// You are using GCC
int division(int x)
{
    int y=x%97;
    return y;
}
int midsquare(int x)
{
    int n=x*x;
    int t;
    if(n<10000000){
        int h=n%10000;
        t=h/1000;
    }
    else{
        int h = n%100000;
        t = h/1000;
    }
    return t;
}
int fold(int x)
{
    int g=x/100;
    int e=x%100;
    int r=e+g;
   if(r>100)
   return r%100;
    return r;
  
}
int main()
{
    int x;
    cin>>x;
    int d=division(x);
    cout<<d<<endl;
    int m=midsquare(x);
    cout<<m<<endl;
    int f=fold(x);
    cout<<f;
}