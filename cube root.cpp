#include <iostream>
#include <cmath>

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Cube root of " << number << " is " << std::cbrt(number) << std::endl;
    return 0;
}
