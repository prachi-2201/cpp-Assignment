/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class rectangle{
	int l,b;
	public : 
		void get()
		{
			cout<<"Enter Length of rectangle: "<<endl;
			cin>>l;
			cout<<"Enter width of rectangle : "<<endl;
			cin>>b;
		}
		void area()
		{
			cout<<"Area : "<<l*b<<endl;
		}
		void circumfrence()
		{
			cout<<"Perimeter : "<<2*(l+b);
		}
};
main()
{
	rectangle r1;
	r1.get();
	r1.area();
	r1.circumfrence();
}
