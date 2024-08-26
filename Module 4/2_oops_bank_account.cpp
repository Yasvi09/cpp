/* 2)  Define a class to represent a bank account. Include the following members:
 Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include<iostream>
using namespace std;

class BankAccount{
	private :
		string depositorName;
		int number;
		string accountType;
		double balance;
		
	public :
		
		void assignvalue(string dname,int accnum,string type,double initialbalance)
		{
			depositorName=dname;
			number=accnum;
			accountType=type;
			balance=initialbalance;
		}
		
		void deposit(double amount)
		{
			balance+=amount;
		}
		
		void withdraw(double amount)
		{
			if(amount<=balance)
			{
				balance-=amount;
			}
			else
			{
				cout<<"\n\n\t Insufficient balance....";
			}
		}
		
		void display()
		{
			cout<<"\n\n\t Depositor Name :"<<depositorName;
			cout<<"\n\n\t Balance :"<<balance;
		}
};

main()
{
	BankAccount ba;
	
	ba.assignvalue("Yasvi",123456456,"savings",20000);
	ba.display();
	
	ba.deposit(1000);
	ba.display();
	
	ba.withdraw(2000);
	ba.display();
	
	ba.withdraw(30000);
	ba.display();
}
