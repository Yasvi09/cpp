/* 4) Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference */

#include<iostream>
using namespace std;

class Circle{
	private:
		int r;
	
	public:
		void get_radius(int r1){
			r=r1;
		}
		
		void Area_of_circle(){
			cout<<"\n\n\t Area of circle is : "<<3.14*r*r<<endl;
		}
		
		void Circumference_of_circle(){
			cout<<"\t Circumference of circle is : "<<2*3.14*r;
		}
};

main()
{
	int r;
	cout<<"\n\n\t Enter radius :";
	cin>>r;
	
	Circle C;
	C.get_radius(r);
	C.Area_of_circle();
	C.Circumference_of_circle();
}
