#include<iostream>
using namespace std;

 class Base
 {
 	private :
 			int pri_data; // accessible to this class only.
			 	
	protected : 
				int pro_data; //accessible to derived class only.
				
	public : 
				int pub_data; // accessible in derived class & main()	
 			
			 	void get_private()
				{
					pri_data=100;
					cout<<"\n\n\t Private Data Member : "<<pri_data; 	
				}	
 
 };
 
 class Derived : public Base
 {
 	public :
 				void get_protected()
 				{
 					pro_data=200;
 					cout<<"\n\n\t Protected Data Member : "<<pro_data; 
				 }
				 
				 void get_public()
 				{
 					pub_data=300;
 					cout<<"\n\n\t Public Data Member : "<<pub_data; 
				 }
 };
 
 main()
 {
 	Derived D;
 	D.get_private();
 	D.get_protected();
 	D.get_public();
 	
 	D.pub_data=400;
 	cout<<"\n\n\t Public Data Member : "<<D.pub_data;
 }
