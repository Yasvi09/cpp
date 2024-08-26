#include<iostream>
using namespace std;

class Areas 
{
	int r;
	int h, w;
	float Pi;
	
	public :
			void area(int rad, float p)
			{
				r=rad;
				Pi=p;
				cout<<"\n\n\t Area of Circle : "<<Pi*r*r;
			}
			void area(int l, int b, int r)
			{
				h=l;
				w=b;
				cout<<"\n\n\t Area of Rectangle : "<<h*w;
			}	
};


main()
{
	Areas A;
	
	A.area(10, 3.14);
	A.area(12, 15, 5);
}
