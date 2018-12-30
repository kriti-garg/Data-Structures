#include <iostream>
#include <climits>
#include<string.h>
using namespace std;
int hash(char ch)
{
	int h;
	h= (ch-'A')%20;
	return h;
}
int main()
{
    string str;
    char hashtable[40];
    int allocated[10]={0};
    int collision=0,k;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        k=hash(str[i]);
        if(allocated[k]==1)
        collision++;
        else
        {
            allocated[k]=1;
            hashtable[k]=str[i];
            
        }
        
}
double count=collision+n;
double c=count/n;
    cout<<c;
}
