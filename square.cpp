#include<iostream>
using namespace std;
class Cube{
	public:
		int n;
		int i;
		Cube()
		{
			cout<<"enter the number:";
			cin>>n;
			for(i=1;i<n;i++)
			{
				cout<<i^i<<endl;
			}
		}
		~Cube()
		{
			cout<<"object destroyed";
		}
};
int main()
{
	Cube c;
}