//WAP to create simple calculator using class

#include<iostream>
using namespace std;

class op
{
	int x,y;
	public :
		void get()
		{
			cout<<"Enter value of number 1 : "<<endl;
			cin>>x;
			cout<<"Enter value of number 2 : "<<endl;
			cin>>y;
		}
		void add()
		{
			cout<<"Addition : "<<x+y<<endl;
		}
		void sub()
		{
			cout<<"Substraction : "<<x-y<<endl;
		}
		void mul()
		{
			cout<<"Multiplication : "<<x*y<<endl;
		}
		void div()
		{
			cout<<"Division : "<<x/y<<endl;
		}
};



main(){
	op cal1;
	cal1.get();
	cal1.add();
	cal1.sub();
	cal1.mul();
	cal1.div();
}
