#include <iostream>

int main() {
    int number, bitPosition;

    std::cout << "Enter Number: ";
    std::cin >> number;

    std::cout << "Enter bit number you wish to set: ";
    std::cin >> bitPosition;

    // Check if the bit is already set
    if ((number & (1 << bitPosition)) != 0) {
        std::cout << "Bit is already set." << std::endl;
    } else {
        // Set the Nth bit
        number |= (1 << bitPosition);
        std::cout << "Bit set Successfully" << std::endl;
    }

    std::cout << "Answer: " << number << std::endl;

    return 0;
}
