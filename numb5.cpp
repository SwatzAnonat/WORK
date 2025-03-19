#include <iostream>

using namespace std;

int main() {
    double grades[4], sum = 0;
    
    for (int i = 0; i < 4; i++) {
        do {
            cout << "Enter grade for Quarter " << i + 1 << " (0-100): ";
            cin >> grades[i];
        } while (grades[i] < 0 || grades[i] > 100);
        
        sum += grades[i];
    }

    double average = sum / 4;
    cout << "Average Grade: " << average << endl;

    return 0;
}
