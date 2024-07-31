#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,9,4,5};
	int n=5,pos=2,ele=8;
	for(int i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
		arr[pos]=ele;
	}
	for(int i=0;i<=n;
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}