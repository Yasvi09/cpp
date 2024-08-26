#include<iostream>
using namespace std;

class Base
{
	public :
			Base()
			{
				cout<<"\n\n\t Base Class Constructor Called...";	
			}	
};

class Derived : public Base
{
	public :
			Derived()
			{
				cout<<"\n\n\t Derived Class Constructor Called...";	
			}	
};

main()
{
	Derived D;
}

