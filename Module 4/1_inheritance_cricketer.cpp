/* 1) Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include<iostream>
using namespace std;

class Cricketer{
	protected:
		int age;
		string name;
};

class Batsman : public Cricketer{
	private :
		int totalrun;
		float averagerun;
		int bestperformance;
		
	public :
		void inputData()
		{
			cout<<"\n\n\t Enter cricketer's name :";
			cin>>name;
			cout<<"\n\n\t Enter cricketer's age :";
			cin>>age;
			cout<<"\n\n\t Enter total run :";
			cin>>totalrun;
			cout<<"\n\n\t Enter best performance :";
			cin>>bestperformance;
		}
		
		void calculateAvg()
		{
			int match=10;
			if(match>0)
			{
				averagerun=(float)totalrun/match;
			}
			else
			{
				averagerun=0;
			}
		}
		
		void display()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Age :"<<age;
			cout<<"\n\n\t Total Run :"<<totalrun;
			cout<<"\n\n\t Average Run :"<<averagerun;
			cout<<"\n\n\t Best Performance :"<<bestperformance;
		}
};

main()
{
	Batsman b;
	b.inputData();
	b.calculateAvg();
	b.display();
}
