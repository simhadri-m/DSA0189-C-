#include <iostream>
using namespace std;

class NumberTriangle {
public:
    int rows;

    // Default constructor (prints triangle with 5 rows)
    NumberTriangle() {
        rows = 5;
        printTriangle();
    }

    // Parameterized constructor (prints triangle with user-defined rows)
    NumberTriangle(int r) {
        rows = r;
        printTriangle();
    }

    // Function to print the triangle
    void printTriangle() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Using the parameterized constructor
    NumberTriangle triangle(n);

    return 0;
}
