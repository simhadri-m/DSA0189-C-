#include <iostream>
using namespace std;

class CubeCalculator {
public:
    int number;

    // Default constructor
    CubeCalculator() {
        number = 1;
        displayCubes();
    }

    // Parameterized constructor
    CubeCalculator(int num) {
        number = num;
        displayCubes();
    }

    // Function to display cubes
    void displayCubes() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using the parameterized constructor
    CubeCalculator cube(n);

    return 0;
}
