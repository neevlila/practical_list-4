#include<iostream>
using namespace std;
class Example
{
public:
	int a;

	Example add(Example Ea, Example Eb)
	{
		Example Ec;
		Ec.a = Ea.a + Eb.a;

		return Ec;
	}
};
int main()
{
	Example E1, E2, E3;

	E1.a = 25;
	E2.a = 100;
	E3.a = 0;

	cout<<"Initial Values"<<endl<<endl;
	cout<<"Value of object 1:"<<E1.a<<endl;
	cout<<"Value of object 2:"<<E2.a<<endl;
	cout<<"Value of object 3:"<<E3.a<<endl<<endl;

	E3 = E3.add(E1, E2);

	cout<<"New values"<<endl<<endl;
	cout<<"Value of object 1: "<<E1.a<<endl;
	cout<<"Value of object 2: "<<E2.a<<endl;
	cout<<"Value of object 3: "<<E3.a<<endl<<endl;
	
	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";

	return 0;
}
