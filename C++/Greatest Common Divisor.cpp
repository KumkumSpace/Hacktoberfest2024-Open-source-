#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a = 48;
    int b = 18;

    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    return 0;
}
