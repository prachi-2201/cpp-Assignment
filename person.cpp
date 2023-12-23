/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;

class  Person{
	string name, country; //private member
	int age; //private member
	
	public:
		void getvalue() //getting data from user
		{
			cout<<"Enter your name : "<<endl;
			cin>>name;
			
			cout<<"Enter your country name : "<<endl;
			cin>>country;
		}
		
		void setvalue() //display data
		{
			cout<<"\n-------------------Display Information-------------------\n";
			cout<<"\nName : "<<name;
			cout<<"\nCountry : "<<country;
		}
	
};

main()
{
	Person p1; // p1 is a object that can access "Person" class methods and members
	p1.getvalue();
	p1.setvalue();
}
