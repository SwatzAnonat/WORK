#include <iostream>

using namespace std;

int main() {
    string name;
    int birthYear, currentYear = 2025;

    cout << "Enter your name: ";
    cin >> name; 
    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "\nName: " << name; // to display your name
    cout << "\nAge: " << currentYear - birthYear << " years old"; //to calculate your age

    return 0;
}