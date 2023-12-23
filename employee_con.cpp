/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
using namespace std;
class Employee 
{
    string name;
    int employeeid;
    double salary;

	public:
    // Constructor
	    Employee(string empname, int empid,int sal) {
	        name = empname;
	        employeeid = empid;
	        salary = sal;
	    }
	
    // Getter function to retrieve the employee's name
    void getName() {
       cout<<"Name : "<<name;
    }

    // Getter function to retrieve the employee's ID
    void getEmployeeid() {
        cout<<"Employee id : "<<employeeid;
    }

    // Getter function to retrieve the employee's salary
    void getSalary() {
        cout<<"salary : "<<salary;
    }
};

int main() {

    Employee employee1("John Doe", 1001,50000);
	employee1.getName();
	employee1.getEmployeeid();
	employee1.getSalary();
    
}

