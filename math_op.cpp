#include <iostream>
using namespace std;
int op(int a, int b,int c) {
    return a + b + c;
}

double op(double a, double b) {
    return a - b;
}

double op(double a, double b, double c) {
    return a * b * c;
}

int op(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}


main() {
    cout<<"Operations:"<<endl;
    cout<<"Addition: "<< op(5, 3, 2)<<endl;
    cout<<"Subtraction: "<< op(5.4, 3.7)<<endl;
    cout<<"Multiplication: "<< op(5.5, 3.3, 4.5)<<endl;
    cout<<"Division: "<< op(10, 2)<<endl;

}

