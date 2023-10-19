#include<iostream>
using namespace std;
class demo
{
	int m,n;
	public:
	demo(int x,int y)
	{ 
		m=x;
		n=y;
		cout<<"Constructor called";
	}
};
int main()
{
	demo d1(5,6);
	
	cout<<endl<<endl<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
}
