#include <iostream>
using namespace std;

int main() {
    int num, original, rev = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
