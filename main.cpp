#include <iostream>
#include <type_traits>

using namespace std;

// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of
// a and b.
int gcd(const int a, const int b){
    int denom{1}; // starting with the lowest possible denominator
    int greatestDenom;
    while (a/denom == b/denom) {
        greatestDenom == denom;
        denom += 1;
    }

    }
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}