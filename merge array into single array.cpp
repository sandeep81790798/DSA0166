#include<iostream>
using namespace std;
int main()
{
	int arr1[]={1,2,3};
	int arr2[]={4,5,6};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[n1+n2];
	int i;
	for(i=0;i<n1;i++)
	{
	arr3[i]=arr1[i];
}
for(i=0;i<n2;i++)
{
	
	arr3[n1+i]=arr2[i];
}
for(i=0;i<n1+n2;i++)
{
	cout<<arr3[i]<<" ";
}
cout<<endl;
return 0;
}