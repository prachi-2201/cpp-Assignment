//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

/* 10. Write a program of Addition, Subtraction, Division, Multiplication using
constructor */

#include<iostream>
using namespace std;

class Math{
	float num1, num2; //private members
	
	public:
		Math(float n1,float n2)
		{
			num1 =n1; //for access private member
			num2 = n2; //for access private member
			
			cout<<"\nAddition of ["<<n1<< "+" <<n2<<"] = "<<n1+n2; // for addition of "num1 + num2"
			cout<<"\nSubstraction of ["<<n1<< "-" <<n2<<"] = "<<n1-n2; // for substraction of "num1 - num2"
			cout<<"\nMultiplication of ["<<n1<< "*" <<n2<<"] = "<<n1*n2; //for multiplication of "num1 * num2"
			cout<<"\nDivision of ["<<n1<< "/" <<n2<<"] = " <<n1/n2; // for division of "n1 + num2"
		}
		
	};
	
	main(){
		
		float n1, n2; //creating for access private member of "Math" class
		
		cout<<"\nEnter Number-1 : ";
		cin>>n1;
		
		cout<<"\nEnter Number-2 : ";
		cin>>n2;
		
		Math m1(n1,n2); //We create constructor, so we have to only create object
	}

