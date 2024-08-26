/* 5) Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene. */

#include<iostream>
using namespace std;

class Triangle{
	private :
		double side1;
		double side2;
		double side3;
		
	public :
		Triangle(double s1,double s2,double s3)
		{
			side1=s1;
			side2=s2;
			side3=s3;
		}
		
		void equilateral()
		{
			if(side1==side2 && side2==side3)
			{
				cout<<"\n\n\t The triangle is equilateral...";
			}
		}
		
		void isosceles()
		{
			if((side1==side2 && side2!=side3) || 
			(side2==side3 && side1!=side3) || 
			(side1==side3 && side2!=side3)) 
			{
				cout<<"\n\n\t The triangle is isosceles...";
			}
		}
		
		void scalene()
		{
			if (side1!=side2 && side2!=side3 && side1!=side3) 
			{
				cout <<"\n\n\t The triangle is scalene...";
        	}
		}
		
		void display()
		{
			equilateral();
			isosceles();
			scalene();
		}
};

main()
{
	Triangle t1(3.0,3.0,3.0);
	Triangle t2(3.0,4.0,3.0);
	Triangle t3(3.0,4.0,5.0);
	
	cout<<"\n\n\t Triangle 1 is :";
	t1.display();
	
	cout<<"\n\n\t Triangle 2 is :";
	t2.display();
	
	cout<<"\n\n\t Triangle 3 is :";
	t3.display();
	
}
