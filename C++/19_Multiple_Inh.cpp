#include<iostream>
using namespace std;

class Tops
{
	int id;
	string sname;
	
	public :
			void get_tops()
			{
				id=1111;
				sname="xxxx";
				cout<<"\n\n\t Id : "<<id;
				cout<<"\n\n\t Student Name : "<<sname;
			}
		
};

class Course 
{
	string cname;
	
	public :
			void get_course()
			{
				cname="WD";
				cout<<"\n\n\t Course Selected : "<<cname;
			}
		
};

class Batch : public Tops,public Course
{
	string bname;
	int duration;
	
	public :
			void get_batch()
			{
				bname="Jun MWF";
				duration=150;
				cout<<"\n\n\t Batch Name : "<<bname;
				cout<<"\n\n\t No. of Days : "<<duration;
			}		
};

main()
{
	Batch obj;
	
	obj.get_tops();
	obj.get_course();
	obj.get_batch();
}

