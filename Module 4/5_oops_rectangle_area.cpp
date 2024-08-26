/* 5) Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter. */

#include<iostream>
using namespace std;

class Rectangle{
	private:
		int l;
		int b;
	
	public:
		void get_length(int l1,int b1){
			l=l1;
			b=b1;
		}
		
		void Area_of_rectangle(){
			cout<<"\n\n\t Area of rectangle is : "<<l*b<<endl;
		}
		
		void perimeter_of_rectangle(){
			cout<<"\t perimeter of rectangle is : "<<2*(l+b);
		}
};

main()
{
	int l;
	cout<<"\n\n\t Enter length :";
	cin>>l;
	
	int b;
	cout<<"\n\n\t Enter breadth :";
	cin>>b;
	
	Rectangle C;
	C.get_length(l,b);
	C.Area_of_rectangle();
	C.perimeter_of_rectangle();
}

