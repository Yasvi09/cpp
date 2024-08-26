//5. Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the marks obtained 
//in two subjects and class result contains the total marks obtained in the test. 
//The class result can inherit the details of the marks obtained in the test and roll number 
//of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class Student{
	int roll_no;
	public:
		void roll(){
			cout<<"\n\n\t Enter Roll no : ";
			cin>>roll_no;
			
			cout<<"\n\n\t Roll no. is : "<<roll_no;
		}
};

class Test : public Student
{	
	protected:
		int m1,m2;	
	public:
		
		void marks(){
			cout<<"\n\n\t Enter marks of subject1 : ";
			cin>>m1;
			
			cout<<"\n\n\t Enter marks of subject2 : ";
			cin>>m2;
			
			cout<<"\n\n\t Marks of subject1 : "<<m1;
			cout<<"\n\n\t Marks of subject2 : "<<m2;
		}
};

class Result : public Test
{
	int total;
	
	public:
		void total_marks(){
			total = m1+m2;
			
			cout<<"\n\n\t Total marks is : "<<total;
		}	
};


main()
{
	Result R;
	
	R.roll();
	R.marks();
	R.total_marks();
}
