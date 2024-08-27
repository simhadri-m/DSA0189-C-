#include <iostream>

// Function to check if a number is a perfect number
bool isPerfect(int number) {
    if (number <= 1) return false; // No perfect numbers less than or equal to 1

    int sum = 0;

    // Find all divisors of the number
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors is equal to the number
    return sum == number;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfect(num)) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}
