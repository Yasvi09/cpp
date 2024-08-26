#include<iostream>
using namespace std;
class Student
{
	int rollno;
	
	public :
			void get_student()
			{
				rollno=103;
				cout<<"\n\n\t Rollno : "<<rollno;	
			}	
};

class Test : public Student
{
	protected:
	int s1, s2, s3;
	public :
			
			void get_test()
			{
				s1=60;
				s2=70;
				s3=77;
				cout<<"\n\n\t S1 = "<<s1<<"  S2 = "<<s2<<" S3 = "<<s3;
			}		
};

class Result  : public Test
{
	int tot_marks;
	
	public :
			void get_result()
			{
				tot_marks=s1+s2+s3;
				cout<<"\n\n\t Total : "<<tot_marks;	
			}	
};

main()
{
	Result obj;
	
	obj.get_student();
	obj.get_test();
	obj.get_result();
}
