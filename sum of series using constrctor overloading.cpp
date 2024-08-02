#include<iostream>
using namespace std;
class Sum{
	public:
		int n,i,s=0;
		Sum()
		{
			cout<<"enter the number:";
			cin>>n;
			for(i=0;i<n;i++)
			{
				s+=i;
			}
			cout<<s<<endl;
		}
};
int main()
{
	Sum m;
	return 0;
}