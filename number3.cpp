#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 5; i <= 50; i += 3) {
        sum += i;
    }
    cout << "Sum of the series: " << sum;
    return 0;
}
