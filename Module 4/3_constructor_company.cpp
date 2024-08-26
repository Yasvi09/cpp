/* 3) Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables. */

#include<iostream>
using namespace std;

class Car
{
	private : 
		string company;
		string model;
		int year;
		
		public :
				Car()
				{
					
				}
			
				Car(string com, string mod,int y)
				{
					company=com;
					model=mod;
					year=y;
				}
				
				void print()
				{
					cout<<"\n\n\t Company : "<<company;
					cout<<"\n\n\t Model : "<<model;
					cout<<"\n\n\t Year : "<<year;
				}
				
};

main()
{
	
	Car C1("Hyundai","Santro", 2001);
	
	C1.print();
	
}
