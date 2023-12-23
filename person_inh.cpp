/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void initializePerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void initializeStudent() {
        initializePerson(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudent() {
        displayPerson();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void initializeTeacher() {
        initializePerson(); 
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacher() {
        displayPerson(); 
        cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "\nEnter Student details:\n";
    student.initializeStudent(); 
    cout << "\n\nEnter Teacher details:\n";
    teacher.initializeTeacher(); 
    
      cout << "\nStudent details:\n";
    student.displayStudent(); 
    cout << "\nTeacher details:\n";
    teacher.displayTeacher(); 

}

