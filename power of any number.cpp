#include <iostream>
#include <cmath> // Required for pow()

int main() {
    double base, exponent, result;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate power
    result = pow(base, exponent);

    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;

    return 0;
}
