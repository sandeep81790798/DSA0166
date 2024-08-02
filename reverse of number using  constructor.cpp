#include<iostream>
using namespace std;
class Reverse{
	public:
		int n,d,r=0;
		Reverse()
		{
			cout<<"enter the number to be revresed:";
			cin>>n;
			while(n!=0)
			{
				d=n%10;
				r=r*10+d;
				n/=10;
			}
			cout<<r<<endl;
		}
};
int main()
{
	Reverse m;
	return 0;
}