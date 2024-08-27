#include <iostream>
using namespace std;

class ReverseNumber {
public:
    int number;

    // Default constructor (reverse of 0)
    ReverseNumber() {
        number = 0;
        displayReverse();
    }

    // Parameterized constructor (reverse of a user-defined number)
    ReverseNumber(int num) {
        number = num;
        displayReverse();
    }

    // Function to calculate and display the reverse of the number
    void displayReverse() {
        int reverse = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        cout << "Reverse of " << number << " is: " << reverse << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using the parameterized constructor
    ReverseNumber revNum(n);

    return 0;
}
