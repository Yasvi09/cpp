#include<iostream>
using namespace std;
class Cube
{
	int n;

	public :
			void get_value(int a)	
			{
				n=a;	
			}
			
			friend int cal_cube(Cube);
};

int cal_cube(Cube C)
{
	return C.n*C.n*C.n;
}

main()
{
	Cube C;
	
	cout<<"\n\n\t Enter a number : ";
	int num;
	cin>>num;
	
	C.get_value(num);	
	int c=cal_cube(C);
	cout<<"\n\n\t Cube : "<<c;
}
