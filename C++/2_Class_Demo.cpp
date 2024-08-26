#include<iostream>
using namespace std;

class Employee
{
	
	private:
	//data members
	int eid;
	string ename;
	int salary;	
	
	public:	
	void get_employee()
	{
		cout<<"\n\n\t Input Employee ID : ";
		cin>>eid;
		
		cout<<"\n\n\t Input Employee Name : ";
		cin>>ename;
		
		cout<<"\n\n\t Input Salary : ";
		cin>>salary;
	}
	
	
	void print_employee()
	{
		cout<<"\n\n\t Employee ID : "<<eid;
		
		cout<<"\n\n\t Employee Name : "<<ename;
		
		cout<<"\n\n\t Salary : "<<salary;
	}
};

main()
{
	Employee E1, E2;
	
	E1.get_employee();
	E2.get_employee();
	
	E1.print_employee();
	E2.print_employee();
}
