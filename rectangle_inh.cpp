/*Write a C++ Program to find Area of Rectangle using inheritance*/

#include<iostream>
using namespace std;

class rectangle{
	
	public : 
	int l,b;
		void get()
		{
			cout<<"Enter Length of rectangle: "<<endl;
			cin>>l;
			cout<<"Enter width of rectangle : "<<endl;
			cin>>b;
		}
		
};

class Area : public rectangle
{
	public :
		void area()
		{
			get();
			cout<<"Area : "<<l*b<<endl;
		}
};
main()
{
	Area a1;
	a1.area();
}
