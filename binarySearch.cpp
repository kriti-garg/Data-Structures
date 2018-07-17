#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int num)
{
		int mid;
		while(l<=r)
		{
			mid = (l+r)/2;
			if(num==arr[mid])
			{
				return mid;
			}
			if(num>arr[mid])
			{
				l=mid+1;
			}
			else
				r = mid-1;
		}
		return -1;
	}
int main()
{
	int size,num;
	cout<<"enter the size of the array ";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"enter the element to search ";
	cin>>num;
	
	int result = binarysearch(arr,0,size-1,num);
	if(result!=-1)
	{
		cout<<"element found at "<<result;
	}
	else
		cout<<"element not found";
}
