// 2) Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Shape{
	protected:
		float width;
		float height;
};

class Rectangle : public Shape{
	public :
		void inputData()
		{
			cout<<"\n\n\t Enter width of rectangle :";
			cin>>width;
			cout<<"\n\n\t Enter height of rectangle :";
			cin>>height;
		}
		
		void display()
		{
			float area=width*height;
			cout<<"\n\n\t Area of rectangle is :"<<area;
		}
};

main()
{
	Rectangle r;
	r.inputData();
	r.display();
}
