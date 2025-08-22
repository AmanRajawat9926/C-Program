//In this program, we will check if a character is an uppercase letter, lowercase letter, digit, or special symbol.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch))
        cout << "Uppercase Letter";
    else if (islower(ch))
        cout << "Lowercase Letter";
    else if (isdigit(ch))
        cout << "Digit";
    else
        cout << "Special Symbol";
    return 0;
}
