#include <iostream>
#include <climits>
using namespace std;
int hash(char str){
    int h = (str-'A')%20;
    return h;
}
// main function
int main()
{
	char str[40];
	char hashtable[20];
	int allocated[20]={0}, collision=0,k;
    
    cin>>str;
    
    for(int i=0;str[i]!='\0';i++)
    {
    	k=hash(str[i]);
    	cout<<str[i]<<"\t"<<k<<endl;
    	if(allocated[k]==1)
			collision++;
		else
		{
			allocated[k]=1;
			hashtable[k]=str[i];
		}
	}
	cout<<collision;
    return 0;
}