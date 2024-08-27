#include <iostream>
#include <cmath> // Required for sqrt()

int main() {
    double number, result;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate square root
    result = sqrt(number);

    std::cout << "The square root of " << number << " is " << result << std::endl;

    return 0;
}
