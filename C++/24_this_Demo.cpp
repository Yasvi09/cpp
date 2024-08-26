#include<iostream>
using namespace std;

class Demo
{
	int a, b;
	
	public :
			void add(int a, int b)
			{
				this->a=a;
				this->b=b;
				cout<<"\n\n\t a  = "<<a;
				cout<<"\n\n\t b = "<<b;
			}
		
};

main()
{
	Demo D;
	D.add(10, 20);
}
