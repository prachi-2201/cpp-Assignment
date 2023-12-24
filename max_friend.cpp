//Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class Max {

	int a, b;

public:

	Max(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	
	friend void max(Max&);
};

void max(Max& s1)
{
	if(s1.a>s1.b)
	{
		cout<<"A is max ";
	}
	else
	{
		cout<<"B is max ";
	}
}
main()
{
	Max m1(4, 6);
	max(m1);
}

