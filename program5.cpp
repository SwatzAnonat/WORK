#include <iostream>

using namespace std;

void getName() {
    string name;
    cout << "Enter the name of the user: ";
    cin >> name;
    cout << "Hello " << name << endl;
}

void getNumbers(int &num1, int &num2) {
    cout << "\nEnter two numbers: " << endl;
    cin >> num1 >> num2;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return (b != 0) ? (double)a / b : 0;
}

int getModulus(int a, int b) {
    return (b != 0) ? a % b : 0;
}

int main() {
    int num1, num2;

    getName();
    getNumbers(num1, num2);

    cout << "\nThe sum of two numbers is: " << add(num1, num2) << endl;
    cout << "The difference of two numbers is: " << subtract(num1, num2) << endl;
    cout << "The product of two numbers is: " << multiply(num1, num2) << endl;
    cout << "The quotient of two numbers is: " << divide(num1, num2) << endl;
    cout << "The modulus of first number is: " << getModulus(num1, num2) << endl;  // Updated function name

    return 0;
}
