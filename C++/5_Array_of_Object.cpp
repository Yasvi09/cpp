#include<iostream>
using namespace std;

class Product
{
	private :
				int pro_id;
				string pro_name;
				
	public :
			void get_product();
			
			void print_product();
		
};

void Product :: get_product()
{
	cout<<"\n\n\t Input Id : ";
	cin>>pro_id;
	
	cout<<"\n\n\t Product Name : ";
	cin>>pro_name;
}

void Product :: print_product()
{
	cout<<"\n\n\t Id : "<<pro_id;
	
	cout<<"\n\n\t Product Name : "<<pro_name;
}


main()
{
	Product P[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n\t Input Product ["<<i+1<<"] : ";
		P[i].get_product();
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n\t Input Product ["<<i+1<<"] : ";
		P[i].print_product();
	}
}
