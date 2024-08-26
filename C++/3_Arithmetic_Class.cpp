#include<iostream>
using namespace std;

class Arithmetic
{
		private :
					int n1, n2;
					
		public :
					void get_numbers()
					{
						cout<<"\n\n\t Enter two numbers : ";
						cin>>n1>>n2;	
					}
					
					void add()
					{
						cout<<"\n\n\t Addition : "<<n1+n2;
					}
					
					void sub()
					{
						cout<<"\n\n\t Subtraction : "<<n1-n2;
					}
					
					void mul()
					{
						cout<<"\n\n\t Multiplication : "<<n1*n2;
					}
					
					void div()
					{
						cout<<"\n\n\t Division : "<<n1/n2;
					}
};

main()
{
	Arithmetic obj;
	
	obj.get_numbers();
	
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
