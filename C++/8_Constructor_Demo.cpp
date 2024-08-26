#include<iostream>
using namespace std;

class Circle
{
	int r;
	float pi;
	
	public :
			Circle()
			{
				r=5;
				pi=3.14;
			}
			
		
			
			void area()
			{
				cout<<"\n\n\t Area of Circle : "<<pi*r*r;	
			} 
			
};

main()
{
	Circle C; // constructor can be called from here.
	
	C.area();
}
