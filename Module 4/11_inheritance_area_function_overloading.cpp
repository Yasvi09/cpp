/* 11) Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */

#include<iostream>
using namespace std;

class Areas 
{
	int r;
	int h, w;
	int h1,w1;
	float Pi;
	
	public :
			void area(int rad)
			{
				r=rad;
				Pi=3.14;
				cout<<"\n\n\t Area of Circle : "<<Pi*r*r;
			}
			void area(int l, int b, int r)
			{
				h=l;
				w=b;
				cout<<"\n\n\t Area of Rectangle : "<<h*w;
			}
			void area(int l1,int b1)	
			{
				h1=l1;
				w1=b1;
				cout<<"\n\n\t Area of triangle : "<<0.5*h1*w1;
			}
};


main()
{
	Areas A;
	
	A.area(10);
	A.area(12, 15, 5);
	A.area(4,5);
}

