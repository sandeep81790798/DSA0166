#include<iostream>
using namespace std;
int main()
{
	int m[2][2]={{1,2},{4,5}},sum=0;
	for(int i=0;i<2;++i)
		sum+=m[i][i] + m[i][1-i];
		cout<<sum<<endl;
	return 0;
}