/* 6) Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables. */

#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		string country;
		
	public:
		void setname(string n)
		{
			name=n;
		}
		
		string getname()
		{
			return name;
		}
		
		void setage(int a)
		{
			age=a;
		}
		
		int getage()
		{
			return age;
		}
		
		void setcountry(string c)
		{
			country=c;
		}
		
		string getcountry()
		{
			return country;
		}
		
		void display()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Age :"<<age;
			cout<<"\n\n\t Country :"<<country;
		}
};

main()
{
	Person p;
	p.setname("xyz");
	p.setage(18);
	p.setcountry("India");
	
	cout<<"\n\n\t ----------Person details----------";
	p.display();
}
