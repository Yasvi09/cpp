// 1) WAP to create simple calculator using class
#include<iostream>
using namespace std;

class Calc{
	int a,b;
	
	public:
		void get_calc(int n1,int n2){
			a=n1;
			b=n2;
		}
		
		void sum(){
			cout<<"\n\n\t Sum is : "<<a+b;
		}
		
		void sub(){
			cout<<"\n\n\t Subtraction is : "<<a-b;
		}
		
		void mul(){
			cout<<"\n\n\t Multiplication is : "<<a*b;
		}
		
		void div(){
			cout<<"\n\n\t Division is : "<<a/b;
		}
};

main()
{
	cout<<"\n\n\t Enter number a :";
	int a;
	cin>>a;
	
	cout<<"\n\n\t Enter number b :";
	int b;
	cin>>b;
	
	Calc C;
	C.get_calc(a,b);
	C.sum();
	C.sub();
	C.mul();
	C.div();
	
}
