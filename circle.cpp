/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class circle{
	int r;
	public : 
		void get()
		{
			cout<<"Enter radius of circle : "<<endl;
			cin>>r;
		}
		void area()
		{
			cout<<"Area : "<<3.14*r*r<<endl;
		}
		void circumfrence()
		{
			cout<<"Circumfrence : "<<2*3.14*r;
		}
};
main()
{
	circle c1;
	c1.get();
	c1.area();
	c1.circumfrence();
}
