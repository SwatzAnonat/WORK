#include <iostream>
using namespace std;

int main() {  // main function where program execution starts
    for (int i = 0; i <= 5; i++) {  // outer loop runs for numbers 0 to 5
        cout << "Multiplication Table for " << i << ":" << endl;
        
        for (int j = 1; j <= 10; j++) {  // inner loop runs for numbers 1 to 10
            cout << i << " x " << j << " = " << i * j << endl; // print multiplication result
        }

        cout << endl;
    }
    return 0;
}
