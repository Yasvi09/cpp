#include<iostream>
using namespace std;

class Base
{
	public :
			void demo()
			{
				cout<<"\n\n\t Base class Called.";	
			}	
};

class Derived : public Base
{
	public :
			void demo()
			{
				cout<<"\n\n\t Derived class Called.";	
			}	
};

main()
{
	Derived D;
	
	D.demo();
	D.Base::demo();
}
