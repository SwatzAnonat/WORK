#include <iostream>
#include <ctime>

using namespace std;

int main() {
    string name;
    int birthYear, birthMonth, birthDay;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month: ";
    cin >> birthMonth;
    cout << "Enter your birth day: ";
    cin >> birthDay;

    time_t t = time(0);
    tm* now = localtime(&t);
    int currentYear = now->tm_year + 1900;
    int currentMonth = now->tm_mon + 1;
    int currentDay = now->tm_mday;

    int age = currentYear - birthYear - ((currentMonth < birthMonth) || (currentMonth == birthMonth && currentDay < birthDay));

    cout << "\n Name: " << name << "\n Age: " << age << " years old \n";

    return 0;
}
