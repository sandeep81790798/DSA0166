#include<iostream>
using namespace std;
int main()
{
	int arr[100]={1,2,3,4,5,6};
	arr=array(arr.rbegin(),arr.rend());
	cout<<arr<<endl;
	return 0;
	
}