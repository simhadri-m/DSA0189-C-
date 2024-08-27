#include <iostream>
using namespace std;

class CubeCalculator {
public:
    int number;

    // Constructor to initialize the number
    CubeCalculator(int num) : number(num) {
        cout << "Calculating cubes up to: " << number << endl;
    }

    // Destructor to display the cubes
    ~CubeCalculator() {
        for (int i = 1; i <= number; i++) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Creating object of CubeCalculator
    CubeCalculator cube(n);

    return 0;
}
