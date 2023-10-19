#include<iostream>
using namespace std; 
class demo
{
	int m, n;
	public:
	demo(int x,int y)
	{
		m=x;
		n=y;
		cout<<"Friendship ";
	}
	demo(demo &x)
	{
		m = x.m;
		n = x.n; 
		cout<<"is best";
	} 
};
int main()
{
	demo obj1(5,6);
	demo obj2(obj1);
	
	cout<<endl<<endl<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
}
