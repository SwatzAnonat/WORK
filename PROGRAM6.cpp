#include <iostream>

using namespace std;

int main() {
    int num, sum = 0, temp;
    
    // input a number
    cout << "Enter a positive number: ";
    cin >> num;
    
    // to compute sum of digits
    temp = num;
    do {
        sum += temp % 10; // to extract last digit and add to sum
        temp /= 10;       // to remove last digit
    } while (temp > 0);
    
    cout << "\nThe sum of the digits is: " << sum << "\n\n";

    // to checking divisibility from 2 to 9 using do while loop
    int divisor = 2;
    do {
        if (num % divisor == 0)
            cout << num << " is divisible by " << divisor << endl;
        else
            cout << num << " is not divisible by " << divisor << endl;
        divisor++;
    } while (divisor <= 9);

    return 0;
}
