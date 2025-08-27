//In this program, we calculate the factorial of a given number

#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact;
    return 0;
}
