// 2) Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template <class T>
void Sort(T arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

template <class T>
void print(T arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
main()
{
	int intArray[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(intArray) / sizeof(intArray[0]);

    cout <<"\n\n\t Unsorted array: ";
    print(intArray, size);

    Sort(intArray, size);

    cout <<"\n\n\t Sorted array: ";
    print(intArray, size);
}
