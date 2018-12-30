#include<iostream>
using namespace std;
class open_hash
{
    int *arr;
    int s;
public :
    open_hash(int size)
    {
        arr=new int[size]();
        s=size;
    }
    void insert(int num)
    {
        int index=num%s;
        while(1)
        {
            if(arr[index]==0 || arr[index]==-1)
            {
                arr[index]=num;
                break;
            }
            else
            {
               index++;
            }
        }
    }
    void display()
    {
        int i=0;
        for(i=0;i<s;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    void deletion(int num)
    {
        int index=num%s,i=0,flag=0;
        for(i=index;i<s;i++)
        {
            if(arr[i]==num)
            {
		flag=1;
                arr[i]=-1;
                break;
            }
        }
	if(flag==0)
		cout<<"not present\n";
    }
};
int main()
{
    open_hash h(5);
    h.insert(1);
    h.insert(2);
    h.insert(6);
    h.deletion(6);
    h.insert(6);
    h.display();
}