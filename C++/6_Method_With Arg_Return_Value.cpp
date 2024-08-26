#include<iostream>
using namespace std;

class Square
{
		int n, m;
		
		public :
				void get_n()
				{
					n=10;
				}
			
				int square_cal()
				{
					return n*n;
				}
			
				int square_m(int a)
				{
					m=a;
					return m*m;
					//cout<<"\n\n\t Square of m : "<<m*m;
				}
};


main()
{
	Square S;
	
	S.get_n();
	int sq=S.square_cal();
	cout<<"\n\n\t Square of the number : "<<sq;
	
	
	int sq1=S.square_m(5);
	cout<<"\n\n\t Square of m : "<<sq1;
}
