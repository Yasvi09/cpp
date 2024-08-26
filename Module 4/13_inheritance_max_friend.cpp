/* 13) Write a program to find the max number from given two numbers
using friend function */

#include<iostream>
using namespace std;

class Number{
	int a, b;
	
	public :
			void get_data()
			{
				cout<<"\n\n\t Enter Number1 : ";
				cin>>a;
				cout<<"\n\n\t Enter Number2 : ";
				cin>>b;
			}
			
			void put_data()
			{
				cout<<"\n\n\t a = "<<a;
				cout<<"\n\n\t b = "<<b;
			}
			
			friend void max(Number n1);
};

void max(Number n1)
{
	if(n1.a>n1.b)
	{
		cout<<"\n\n\t Maximum number is : "<<n1.a;
	}
	else
	{
		cout<<"\n\n\t Maximum number is : "<<n1.b;
	}
}

main()
{
	Number n1;
	n1.get_data();
	max(n1);
}
