// 1) Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <class T>
void swapping(T x, T y)
{
	cout<<"\n\n\n\t Before Swapping ----------";
	cout<<"\n\n\t x = "<<x;
	cout<<"\n\n\t y = "<<y;
	T temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"\n\n\n\t After Swapping ----------";
	cout<<"\n\n\t x = "<<x;
	cout<<"\n\n\t y = "<<y;
}

main()
{
	int a, b;
	cout<<"\n\n\t Enter a : ";
	cin>>a;
	cout<<"\n\n\t Enter b : ";
	cin>>b;
	swapping(a, b);
}

