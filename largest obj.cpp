#include<iostream>
using namespace std;
class largest{
	private:
		int x;
		int y;
		public:
			void setdata(int a,int b)
			{
				x=a;
				y=b;
			}
			friend void find_max(largest obj);
};
void find_max(largest obj)
{
	int max=(obj.x>obj.y)?obj.x:obj.y;
	cout<<max<<endl;
}
int main()
{
	largest obj;
	int a,b;
	cout<<"a and b are:";
	cin>>a>>b;
	obj.setdata(a,b);
	find_max(obj);
	return 0;
}