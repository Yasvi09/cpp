#include<iostream>
using namespace std;

 class Student
 {
 	private : int rollno;
	 		 string sname;
			 int marks[5];
			 int per;
			 char grade;	
			 
	public :
				void getdata();
				void printdata();
				void calculate();		
 };
 
 			void Student :: getdata()
			{
				cout<<"\n\n\t Input Rollno : ";
				cin>>rollno;
				cout<<"\n\n\t Input Student's Name : ";
				cin>>sname;
				int tot=0;
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Input Marks ["<<i+1<<"] : ";
					cin>>marks[i];
					tot=tot+marks[i];
				}
				
				per=tot/5;
			}
			
			void Student :: printdata()
			{
				cout<<"\n\n\t Rollno : "<<rollno;
				cout<<"\n\n\t Student's Name : "<<sname;
				
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Marks ["<<i+1<<"] : "<<marks[i];
				}
			}
			
			void Student :: calculate()
			{
				cout<<"\n\n\t Percentage : "<<per;	
				
				if(per>=70)
					cout<<"\n\n\t A+";
				else if(per>=60)
					cout<<"\n\n\t A";
				else if(per>=50)
					cout<<"\n\n\t B";
				else if(per>=40)
					cout<<"\n\n\t C";
				else
					cout<<"\n\n\t Fail";
			}
			
 
 main()
 {
 	Student S;
 	
 	S.getdata();
 	S.printdata();
 	S.calculate();
 }
