#include <iostream>
using namespace std;
class Student
{
	int roll;
	char name[50];
	int total;

public:
	void getdata()
	{
		cout<<"Enter your Roll: ";
		cin>>roll;
		cout<<"Enter your Name: ";
		cin.ignore();
		cin.get(name, 50);
		cout<<"Enter your Total Marks: ";
		cin>>total;
	}
	int pos(Student obj[], int size)
	{
		int pos=0;
		int max=obj[0].total;
 		for (int i=0;i<size;i++)
		 {
			if (obj[i].total>max)
			{
				max = obj[i].total;
				pos = i;
			}
		}
		return pos;
	}
	void putdata()
	{
		cout<<endl<<"Roll:"<<roll<< endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Total Marks: "<< total << endl;
	}
};
void arrayOfObjects()
{
	Student s[3], s1;
	int pos;
	for (int i=0;i<3;i++)
	{
		s[i].getdata();
	}
	pos=s1.pos(s,3);
	cout<<endl<<"Highest scoring Student Details:"<<endl	<<endl;
	s[pos].putdata();
}
int main()
{
	arrayOfObjects();
	
	cout<<"Name: Neev Lila"<<endl;
	cout<<"Enrollment no.220130318021";

	return 0;
}
