#include <iostream>
#include <cmath> // for std::fabs function

// Function to compute cube root using Newton-Raphson method
double cubeRoot(double number) {
    if (number < 0) {
        std::cerr << "Error: Negative number entered. Cube root for negative numbers is not supported." << std::endl;
        return -1;
    }

    double tolerance = 0.00001; // Set tolerance level
    double guess = number; // Initial guess

    while (true) {
        double nextGuess = (2 * guess + number / (guess * guess)) / 3;
        if (std::fabs(nextGuess - guess) < tolerance) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}

int main() {
    double number;

    std::cout << "Enter a number to find its cube root: ";
    std::cin >> number;

    double result = cubeRoot(number);

    if (result != -1) {
        std::cout << "The cube root of " << number << " is approximately " << result << std::endl;
    }

    return 0;
}
