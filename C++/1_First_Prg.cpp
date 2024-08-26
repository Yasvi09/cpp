#include<iostream> //std (input/output)
using namespace std;  

main()
{
	/*int a, b, ans;
	
	cout<<"\n\n\t Enter a : ";
	cin>>a;
	
	cout<<"\n\n\t Enter b : ";
	cin>>b;
	
	ans=a*b;
	cout<<endl<<"ans  = "<<ans;
	*/
	
	/*for(int i=1;i<=10;i++)
	{
		cout<<" "<<i;
	}*/
	
	int ar[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t Enter element : ar["<<i<<"]";
		cin>>ar[i];
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t ar["<<i<<"] : "<<ar[i];
	}
}
