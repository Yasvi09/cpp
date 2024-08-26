/* 6) Write a C++ Program to show access to Private Public and Protected using
Inheritance */

#include<iostream>
using namespace std;

class Base{
	private :
		int privatevar;
		
	protected :
		int protectedvar;
		
	public :
    	int publicvar;
    	
    Base() 
	{
        privatevar=1;
        protectedvar=2;
        publicvar=3;
    }
    void displayBase()
    {
    	cout<<"\n\n\t Private :"<<privatevar;
    	cout<<"\n\n\t Protected :"<<protectedvar;
    	cout<<"\n\n\t Public :"<<publicvar;
	}
	
	void displayprivate()
	{
		cout<<"\n\n\t Private :"<<privatevar;
	}
};

class Derived : public Base{
	public :
		void displayDerived()
		{
	    	cout<<"\n\n\t Protected :"<<protectedvar;
	    	cout<<"\n\n\t Public :"<<publicvar;
	    	displayprivate();
		}
};

main()
{
	Derived d;
	
	cout<<"\n\n\t -----Derived class -----";
	d.displayDerived();
	
	cout<<"\n\n\t -----Base class -----";
	d.displayBase();
}
