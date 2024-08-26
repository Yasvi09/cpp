#include<iostream>
using namespace std;

class Demo
{
	public :
			Demo()
			{
				cout<<"\n\n\t Constructor called.";
			}
			
			~Demo()
			{
				cout<<"\n\n\t Destructor called.";
			}
};

main()
{
	Demo D;
	
	
}
