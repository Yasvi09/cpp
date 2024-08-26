/*4) Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account. */

#include<iostream>
using namespace std;

class BankAccount{
	private :
		int accountNumber;
		double balance;
	
	public :
		
		BankAccount(int accNum,double initialbalance)
		{
			accountNumber=accNum;
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
			cout<<"\n\n\t Account Number :"<<accountNumber;
			cout<<"\n\n\t Balance :"<<balance;
		}
};

main()
{
	BankAccount ba(123456,20000);
	ba.deposit(2000);
	ba.display();
	
	ba.withdraw(2000);
	ba.display();
	
}
