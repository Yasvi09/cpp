#include<iostream>
using namespace std;

class Cube
{
	int num;
	
	public :
			inline void get_number()
			{
				num=7;
				cout<<"\n\n\t Cube : "<<num*num*num;
			}	
};

main()
{
	Cube C;
	C.get_number();
}
