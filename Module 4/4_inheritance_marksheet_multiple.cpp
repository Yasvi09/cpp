// 4) Write a C++ Program display Student Mark sheet using Multiple inheritance

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

class Acedamic{
	protected:
		float marks[3];
		float percentage;
	
	public :
		void inputAcedamicData()
		{
			float total=0;
			cout<<"\n\n\t Enter marks :";
			for(int i=0;i<3;i++)
			{
				cout<<"\n\n\t Subject" <<i+1<<":";
				cin>>marks[i];
				total+=marks[i];
			}
			percentage=(total/300)*100;
		}
		
		void displayAcedamic()
		{
			cout<<"\n\n\t Marks :";
			for(int i=0;i<3;i++)
			{
				cout<<marks[i]<<" ";
			}
			cout<<"\n\n\t Percentage :"<<percentage<<"%";
		}
};

class Student : public Person,public Acedamic{
	public :
		void inputStudentData()
		{
			inputPersonData();
			inputAcedamicData();
		}
		
		void displayStudent()
		{
			displayPerson();
			displayAcedamic();
		}
};

main()
{
	Student s;
	s.inputStudentData();
	s.displayStudent();
}
