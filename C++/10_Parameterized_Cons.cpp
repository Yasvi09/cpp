#include<iostream>
using namespace std;

class Circle
{
	int r;
	float pi;
	
	public :
			Circle(int rad, float p=3.14) //default argument
			{
				r=rad;
				pi=p;
			}
			
			void area()
			{
				cout<<"\n\n\t Area of Circle : "<<pi*r*r;	
			} 
			
};

main()
{
	int n;
	cout<<"\n\n\t Enter n : ";
	cin>>n;
	
	Circle C(n); // constructor can be called from here.
	
	C.area();
}
