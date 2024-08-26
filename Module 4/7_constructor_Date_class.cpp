/* 7) Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid */

#include<iostream>
using namespace std;

class Date{
	private :
		int day;
		int month;
		int year;
	
	public :
		void setDate(int d, int m, int y) 
		{
	        day = d;
	        month = m;
	        year = y;
    	}
    	
    	void getDate(int d, int m, int y)
		{
	        d = day;
	        m = month;
	        y = year;
    	}
    	
    	void validateDate()
		{
	        if (day > 0 && day <= 31 && month > 0 && month <= 12) 
			{
	            cout <<"\n\n\t The date is valid: " << day << "/" << month << "/" << year;
	        } 
			else 
			{
	            cout << "\n\n\t The date is invalid!";
	        }
    	}
};

main()
{
	Date date1;  

    cout << "\n\n\t Date 1: ";
    date1.setDate(30, 6, 2023);
    date1.validateDate();

    cout << "\n\n\t Date 2: ";
    date1.setDate(0, 7, 2023);
    date1.validateDate();
    
}
