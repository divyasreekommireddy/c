#include<iostream>
using namespace std;
class Address
{
	public:
		string city;
		Address()
		{
			city ="Hyderabad";
		}
};
class student
{
	public:
		string name;
		Address addr;
		void display()
		{
			cout <<"Name:"<<name<<endl;
		}
};
int main()
{
	student s;
	s.name="geetha";
	s.display();
	return 0;
}
