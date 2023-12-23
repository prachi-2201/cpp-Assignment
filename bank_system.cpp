/*Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
*/
#include<iostream>
using namespace std;

class Bank{
		
		string name, acc_type;
		double acc_no, balance, dep_amnt, withraw;
		
		
	public:
		
		void getdata(){ //getdata method using for getting user information
			
			cout<<"------------------------------Enter the details------------------------------";
			cout<<"\nIf you deposite a money then, Enter your name : ";
			cin>>name;
			
			cout<<"\nEnter the account number : ";
			cin>>acc_no;
			
			cout<<"\nWhich type of account these, saving or current ? : ";
			cin>>acc_type;
			
			cout<<"\nEnter your Balance ammount : ";
			cin>>balance;
				
		}
		
		void deposit()
		{
			
			cout<<"\nEnter ammount which you want to deposit : ";
			cin>>dep_amnt;
		}
		
		void check_balance()
		{
			cout<<"\n\nBank balance before deposite a amont :"<<balance;
			cout<<"\nBalance after deposition : "<<(balance+dep_amnt); //add a deposite amount in main balance
		}
		
		void withraw_money(){
			cout<<"\nEnter ammount for withraw money : ";
			cin>>withraw;
			
			cout<<"\nBank balance after withraw amount : "<<(balance+dep_amnt)-withraw; //substract a amount of withdraw
		}
		
		void display(){
			cout<<"\nName : "<<name;
			cout<<"\nTotal balance : "<<(balance+dep_amnt)-withraw;
		}
		
};

main()
{
	Bank b; // b object can access all methods of "Bank" class
	
	b.getdata(); 
	cout<<"\n------------------------------Deposit------------------------------";
	b.deposit();
	b.check_balance();
	cout<<"\n\n------------------------------Withdraw------------------------------";
	b.withraw_money();
	cout<<"\n\n------------------------------Display the information about bak holder------------------------------";
	b.display();
}
