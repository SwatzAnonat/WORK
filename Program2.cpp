#include <iostream>
using namespace std;

int main() {
    int num;

    // taking input
    cout << "Enter an integer: ";
    cin >> num;

    // checking if even or odd
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;

    // checking if positive, negative, or zero
    if (num > 0)
        cout << num << " is Positive" << endl;
    else if (num < 0)
        cout << num << " is Negative" << endl;
    else
        cout << num << " is Zero" << endl;

    return 0;
}
