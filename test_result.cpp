/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include <iostream>
using namespace std;
class Students {
protected:
    int rollnumber;

public:
    Students(int roll_number)
	{
		rollnumber=roll_number;
	}
};

class Test : public Students {
protected:
    int subject1_marks;
    int subject2_marks;

public:
    Test(int roll_number, int subject1_marks, int subject2_marks)
        : Students(roll_number), subject1_marks(subject1_marks), subject2_marks(subject2_marks) {}
};

class Result : public Test {
private:
    int total_marks;

public:
    Result(int roll_number, int subject1_marks, int subject2_marks)
        : Test(roll_number, subject1_marks, subject2_marks) 
		{
        total_marks = subject1_marks + subject2_marks;
    	}

    void displayResult() 
	{
        cout << "Roll Number: " << rollnumber <<endl;
        cout << "Subject 1 Marks: " << subject1_marks <<endl;
        cout << "Subject 2 Marks: " << subject2_marks <<endl;
        cout << "Total Marks: " << total_marks <<endl;
    }
};

main() {
    Result student_result(101, 80, 75);
    student_result.displayResult();
}

