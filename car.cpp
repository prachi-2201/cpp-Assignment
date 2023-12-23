/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
using namespace std;

class car{
	string company,model;
	int year;
	
	public:
		
		void get()
		{
			cout<<"Enter your company : "<<endl;
			cin>>company;
			cout<<"Enter model : "<<endl;
			cin>>model;
			cout<<"Enter year : "<<endl;
			cin>>year;
		}
		
		void set()
		{
			cout<<"Company : "<<company<<endl;
			cout<<"model : "<<model<<endl;
			cout<<"year : "<<year<<endl;
		}
};

main()
{
	car c1;
	c1.get();
	c1.set();
}
