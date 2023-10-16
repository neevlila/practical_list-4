#include<iostream>
using namespace std;
class Area
{
private:
int length, breadth;
public:
Area()
{
	length=7;
	breadth=21;
}
void Calculate()
{
	cout<<endl<<"area="<<length * breadth;
}
};
int main()
{
	Area A1;
	A1.Calculate();
	Area A2;
	A2.Calculate();

	cout<<endl<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";

	return 0;
}
