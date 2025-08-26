//In this program, we calculate the roots of a quadratic equation ax^2 + bx + c = 0

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different: " << root1 << ", " << root2;
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        cout << "Roots are real and same: " << root1;
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex: " << realPart << " + " << imagPart << "i, "
             << realPart << " - " << imagPart << "i";
    }
    return 0;
}
