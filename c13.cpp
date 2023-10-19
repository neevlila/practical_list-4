#include<iostream>
using namespace std;
class rectangle
{
	int length, width;
	public:
	rectangle()
	{
		length=0;
		width=0;
		cout<<"Name: Neev Lila"<<endl;
		cout<<"Enrollment no.220130318021"<<endl<<endl;
		cout<<"Constructor Called and ";
	}
	~rectangle()
	{
		cout<<"Destructor Called";
	}
};
int main()
{
	rectangle x;
}
