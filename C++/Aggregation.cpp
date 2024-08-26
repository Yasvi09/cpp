// Aggregation : Association between objects 

#include<iostream>
using namespace std;

class Department{
	
	public :
		int dept_id;
		string dname;
		Department(int dept_id,string dname)
		{
			this->dept_id=dept_id;
			this->dname=dname;
		}
};

class Employee{
	private :
		Department * dept; // dept_id,dname
		
	public :
		int emp_id;
		string ename;
		
		Employee(int emp_id,string ename,Department * dept)
		{
			this->emp_id=emp_id;
			this->ename=ename;
			this->dept=dept; //5000
		}
		
		void print()
		{
			cout<<"\n\n\t Emp Id :"<<emp_id;
			cout<<"\n\n\t Emp name :"<<ename;
			cout<<"\n\n\t Dept Id :"<<dept->dept_id;
			cout<<"\n\n\t Dept name :"<<dept->dname;
		}
};

main()
{
	Department D(1101,"Finance"); //5000
	
	Employee E(201,"xxxx",&D);
	
	E.print(); 
}
