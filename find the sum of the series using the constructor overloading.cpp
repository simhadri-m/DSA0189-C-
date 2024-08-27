#include <iostream>
using namespace std;

class SeriesSum {
public:
    int number;

    // Default constructor (for sum of first 10 natural numbers)
    SeriesSum() {
        number = 10;
        displaySum();
    }

    // Parameterized constructor (for sum up to a user-defined number)
    SeriesSum(int num) {
        number = num;
        displaySum();
    }

    // Function to calculate and display the sum of the series
    void displaySum() {
        int sum = 0;
        for (int i = 1; i <= number; i++) {
            sum += i;
        }
        cout << "Sum of the series up to " << number << " is: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using the parameterized constructor
    SeriesSum series(n);

    return 0;
}
