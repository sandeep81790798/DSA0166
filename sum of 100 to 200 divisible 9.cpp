#include<iostream>
using namespace std;
class Divisible{
	public:
		int n,i,count=0;
		Divisible()
		{
			for(i=100;i<=200;i++)
			{
				if(i%9==0)
				{
					count++;
					cout<<i<<endl;
	
				}
			   
			}
			cout<<count<<endl;
		}
};
int main()
{
	Divisible d;
	return 0;
}