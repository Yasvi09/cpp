/* 6)  Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor */

#include<iostream>
using namespace std;

class Employee{
	private :
		string e_name;
		int e_id;
		double e_salary;
		
	public :
		Employee(string ename,int eid,double esalary)
		{
			e_name=ename;
			e_id=eid;
			e_salary=esalary;
		}
		
		void setSalary(double rating)
		{
			if(rating<0 || rating>5)
			{
				cout << "\n\n\t Invalid performance rating...";
			}
			
			double bonus = 0;
			
	        if (rating>=4.5) 
			{
	            bonus = 0.20 * e_salary;
	        } 
			else if (rating>=3.5) 
			{
	            bonus = 0.10 * e_salary; 
	        } 
			else if (rating>=2.5) 
			{
	            bonus = 0.05 * e_salary; 
	        }
	
	        e_salary += bonus;
	        cout <<"\n\n\t New Salary based on performance :" <<e_salary;
		}
		
		void displayDetails()
		{
			cout<<"\n\n\t Employee Name :"<<e_name;
			cout<<"\n\n\t Employee Id :"<<e_id;
			cout<<"\n\n\t Employee salary :"<<e_salary;
		}
};

main()
{
	Employee emp1("Yasvi", 1001, 50000.0);
    Employee emp2("Janvi", 1002, 60000.0);

    cout << "\n\n\t Employee 1 Details :";
    emp1.displayDetails();

    cout << "\n\n\t Employee 2 Details :";
    emp2.displayDetails();
    
    cout <<"\n\n\t ---Setting new salary for Employee 1 with performance rating of 4.8---";
    emp1.setSalary(4.8);

    cout <<"\n\n\t ---Setting new salary for Employee 2 with performance rating of 3.2---";
    emp2.setSalary(3.2);
    
    cout << "\n\n\t Updated Employee 1 Details :";
    emp1.displayDetails();
    
    cout << "\n\n\t Updated Employee 2 Details :";
    emp2.displayDetails();

 }
