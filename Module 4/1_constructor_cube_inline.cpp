/* 1) Write a program to find the multiplication values and the cubic values using
inline function */

#include<iostream>
using namespace std;

class Cube
{
	int num;
	int num1;
	
	public :
		
			inline void get_mul()
			{
				num=7;
				num1=8;
				cout<<"\n\n\t Multiplication : "<<num*num1;
			}
			inline void get_number()
			{
				num=7;
				cout<<"\n\n\t Cube : "<<num*num*num;
			}	
};

main()
{
	Cube C;
	C.get_number();
	C.get_mul();
}
