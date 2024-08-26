/* 3) Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)  */

#include<iostream>
using namespace std;

class Person{
	protected :
		string name;
		int age;
		
	public :
		void inputPersonData()
		{
			cout<<"\n\n\t Enter name :";
			cin>>name;
			cout<<"\n\n\t Enter age :";
			cin>>age;
		}
		
		void displayPerson()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Age :"<<age;
		}
};

class Student : public Person{
	protected:
		float percentage;
		
	public :
		void inputStudentData()
		{
			inputPersonData();
			cout<<"\n\n\t Enter percentage :";
			cin>>percentage;
		}
		
		void displayStudent()
		{
			displayPerson();
			cout<<"\n\n\t Percentage :"<<percentage;
		}
};

class Teacher : public Person{
	protected:
		float salary;
		
	public :
		void inputTeacherData()
		{
			inputPersonData();
			cout<<"\n\n\t Enter salary :";
			cin>>salary;
		}
		
		void displayTeacher()
		{
			displayPerson();
			cout<<"\n\n\t Salary :"<<salary;
		}
};

main()
{
	Student s;
	Teacher t;
	
	cout<<"\n\n\t -----Student Details-----";
	s.inputStudentData();
	s.displayStudent();
	
	cout<<"\n\n\t -----Teacher Details-----";
	t.inputTeacherData();
	t.displayTeacher();
}
