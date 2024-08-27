#include <iostream>

int main() {
    int n;
    
    // Prompt user for the number of elements
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Check if n is non-positive and handle invalid inputs
    if (n <= 0) {
        std::cerr << "Invalid input. n must be a positive integer." << std::endl;
        return 1;
    }

    int sum = 0;
    int count = 0;
    int number;

    std::cout << "Enter the numbers: ";

    // Read n numbers and compute their sum using a do-while loop
    do {
        std::cin >> number;
        sum += number;
        count++;
    } while (count < n);

    // Output the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
