#include <iostream>
#include <limits> // For numeric_limits

// Function to check if a number is a perfect number
bool isPerfect(int number) {
    if (number <= 1) return false; // No perfect numbers less than or equal to 1

    int sum = 0;
    int i = 1;

    // Find all divisors of the number using a while loop
    while (i <= number / 2) {
        if (number % i == 0) {
            sum += i;
        }
        i++;
    }

    // Check if sum of divisors is equal to the number
    return sum == number;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    // Validate the input
    if (std::cin.fail()) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        return 1;
    }

    // Check if the number is perfect and print the result
    if (isPerfect(num)) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}
