#include <iostream>
#include "gcd.hpp"
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first positive integer: " << endl;
    cin >> a;
    while (a < 0) {
        cout << "invalid input" << endl;
        cin >> a;
    }
    cout << "Enter the second positive integer: " <<endl;
    cin >> b;
    while (b < 0) {
        cout << "invalid input" << endl;
        cin >> b;
    }

    cout << "You entered " << a << " and " << b << endl;
    cout << "The greatest common denominator is " << gcd(a,b) << endl;

    return 0;
}

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of
// a and b.
int gcd(const int a, const int b) {
    if (a == 0 || b == 0)
        return 0; // the greatest common denominator of zero is always zero
    if (a == b) // recursion ends (base case achieved)
        return a; // largest common denominator found
    if (a > b)
        return gcd(a - b, b); // recursion; move to the next possible common denominator
    return gcd(a, b - a); // recursion; move to the next possible common denominator (other way around)
}