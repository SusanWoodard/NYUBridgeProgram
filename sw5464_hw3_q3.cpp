#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    double a, b, c;
    double discriminant;
    double root1, root2;
    string rootStatus;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    discriminant = pow(b, 2) - 4 * a * c;

    if (a == 0 && b == 0) {
        if (c == 0) {
            rootStatus = "infinite number of solutions";
            cout << "This equation has " + rootStatus << endl;
        }
        else {
            rootStatus = "no solution";
            cout << "This equation has " + rootStatus << endl;
        }
    }
    else {
        if (discriminant == 0) {
            rootStatus = "a single real solution";
            root2 = root1 = -b / (2 * a);
            cout << "This equation has " + rootStatus << " x = " << root1 << endl;
        }
        else if (discriminant > 0) {
            rootStatus = "two real solutions";
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "This equation has " + rootStatus << " x1 = " << root1 <<
                " and " << "x2 = " << root2 << endl;
        }
        else {
            rootStatus = "no real solution";
            cout << "This equation has " + rootStatus << endl;
        }
    }

    return 0;
}