/* 12) Write a program to swap the two numbers using friend function
without using third variable */

#include<iostream>
using namespace std;
class Swapping
{
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
			
			friend void swap(Swapping);
};

void swap(Swapping S)
{
	S.a=S.a+S.b;
	S.b=S.a-S.b;
	S.a=S.a-S.b;
	
	cout<<"\n\n\n\t After Swapping -------------";
	cout<<"\n\n\n\t a = "<<S.a;
	cout<<"\n\n\t b = "<<S.b;
}


main()
{
	Swapping S;

	S.get_data();
	cout<<"\n\n\n\t Before Swapping -------------";
	S.put_data();
	swap(S);
	
}
