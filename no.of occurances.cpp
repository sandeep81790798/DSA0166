#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5},c=0,v=2;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	if(arr[i]==v)
		{
			c++;
		}
		cout<<"occurances is:"<<c;
		return 0;
}