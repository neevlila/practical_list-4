#include<iostream>
using namespace std;
class numbers 
{
	int num1, num2;
	friend int add(numbers N);
public:
	void setdata(int a, int b);
	
};
void numbers :: setdata(int a, int b)
{
	num1=a;
	num2=b;
}
int add(numbers N)
{
	return (N.num1+N.num2);
}
int main()
{
	numbers N1;
	N1.setdata(10,20);
	
	cout<<"Sum ="<<add(N1);
	
	cout<<endl<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";
	
	return 0;	
}
