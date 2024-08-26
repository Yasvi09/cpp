/* 2) Write a program of Addition, Subtraction, Division, Multiplication using
constructor.  */

#include<iostream>
using namespace std;

class Calculator{
	private :
		double n1,n2;
		
	public:
		Calculator(double num1,double num2)
		{
			n1=num1;
			n2=num2;
		}
		
		void add()
		{
			cout<<"\n\n\t Addition :"<<n1+n2;
		}
		
		void sub()
		{
			cout<<"\n\n\t Subtraction :"<<n1-n2;
		}
		
		void mul()
		{
			cout<<"\n\n\t Multiplication :"<<n1*n2;
		}
		
		void div()
		{
			cout<<"\n\n\t Division :"<<n1/n2;
		}
};

main()
{
	double n1,n2;
	cout<<"\n\n\t Enter first number :";
	cin>>n1;
	cout<<"\n\n\t Enter second number :";
	cin>>n2;
	
	Calculator calc(n1,n2);
	calc.add();
	calc.sub();
	calc.mul();
	calc.div();
}
