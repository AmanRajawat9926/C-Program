//This program compares two numbers and prints the larger one or indicates if they are equal.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is larger";
    else if (b > a)
        cout << b << " is larger";
    else
        cout << "Both are equal";
    return 0;
}
