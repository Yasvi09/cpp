#include<iostream>
using namespace std;

class Car
{
		string company;
		string model;
		int year;
		
		public :
				Car()
				{
					
				}
			
				Car(string com, string mod,int y)
				{
					company=com;
					model=mod;
					year=y;
				}
				
				void print()
				{
					cout<<"\n\n\t Company : "<<company;
					cout<<"\n\n\t Model : "<<model;
					cout<<"\n\n\t Year : "<<year;
				}
				
};

main()
{
	
	Car C1("Hyundai","Santro", 2001), C2;
	
	C1.print();
	
	cout<<"\n\n\t After copying C1 into C2";
	C2=C1;
	
	C2.print();
}
