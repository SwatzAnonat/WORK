#include <iostream>
using namespace std;

int main() {
    char ch;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a character: ";
        cin >> ch;
        if (ch == 'n') {
            cout << "Loop exited." << endl;
            break;
        }
    }
    return 0;
}
