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
				cout<<i*i*i<<endl;
			}
		}
};
int main()
{
	Cube c;
	return 0;
}