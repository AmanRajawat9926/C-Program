//In this program, we check if a person is eligible to vote based on their age

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18)
        cout << "Eligible to vote";
    else
        cout << "Not eligible to vote";
    return 0;
}
