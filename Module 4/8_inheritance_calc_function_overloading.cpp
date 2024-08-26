/* 8) Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include <iostream>
using namespace std;

class Calc{
	public :
		void calc(int a,int b)
		{
			cout<<"\n\n\t Addition is :"<<a+b;
		}
		
		void calc(int a,int b,char c)
		{
			if(c=='-')
			{
				cout<<"\n\n\t Subtraction is :"<<a-b;
			}
		}
		
		void calc(double a,double b)
		{
			cout<<"\n\n\t Multiplication is :"<<a*b;
		}
		
		void calc(float a,float b)
		{
			cout<<"\n\n\t Division is :"<<a/b;
		}
};

main()
{
	Calc c;
	c.calc(5,3);
	c.calc(5,3,'-');
	c.calc(5,3);
	c.calc(10,2);
}
