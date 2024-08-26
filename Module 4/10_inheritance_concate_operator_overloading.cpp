// 10) Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
using namespace std;

class String{
	string str;
	
	public:
		String(string s)
		{
			str=s;
		}
		
		String operator+(String &other)
		{
			return String(str+other.str);
		}
		
		void display()
		{
			cout<<"\n\n\t\t"<<str;
		}
};
main()
{
	String str1("Hello");
	String str2("World !");
	
	cout<<"\n\n\t String 1 is :";
	str1.display();
	
	cout<<"\n\n\t String 2 is :";
	str2.display();
	
	String result=str1+str2;
	
	cout<<"\n\n\t Concatenated string is :";
	result.display();
}


