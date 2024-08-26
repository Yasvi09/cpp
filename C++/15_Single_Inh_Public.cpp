//Single Inheritance by Public Derivation.

#include<iostream>
using namespace std;

class Dept
{
	int d_id;
	string dname;
	
	public :
			void get_dept()
			{
				cout<<"\n\n\t Enter a Department ID : ";
				cin>>d_id;
				cout<<"\n\n\t Enter a Department Name : ";
				cin>>dname;
			}
			
			void print_dept()
			{
				cout<<"\n\n\t Department ID : "<<d_id;
				cout<<"\n\n\t Department Name : "<<dname;
			}
		
};


class Employee : public Dept
{
	int e_id;
	string ename;

	
	
	public :
			void get_emp()
			{
				cout<<"\n\n\t Enter a Employee ID : ";
				cin>>e_id;
				cout<<"\n\n\t Enter a Employee Name : ";
				cin>>ename;
			}
			
			void print_emp()
			{
				cout<<"\n\n\t Employee ID : "<<e_id;
				cout<<"\n\n\t Employee Name : "<<ename;
			}
			
};

main()
{
	Employee E;
	
	E.get_dept();
	E.get_emp();
	
	
	E.print_dept();
	E.print_emp();
}
