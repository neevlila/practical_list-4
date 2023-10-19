#include<iostream>
using namespace std;
class BaseClass
{
public:
   BaseClass()
   {
   	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021"<<endl<<endl;

      cout << "Constructor of the BaseClass : Object Created"<<endl;
   }
	
   ~BaseClass()
   {
      cout << "Destructor of the BaseClass : Object Destroyed"<<endl;
   }
};
int main ()
{
	BaseClass des;
    
	return 0;
}
