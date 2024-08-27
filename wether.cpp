#include <iostream>
using namespace std;

class PrimeSumChecker {
public:
    int number;

    // Constructor to initialize the number and check for prime sum
    PrimeSumChecker(int num) : number(num) {
        cout << "Checking if " << number << " can be expressed as the sum of two prime numbers." << endl;
    }

    // Destructor to display the result
    ~PrimeSumChecker() {
        if (canBeExpressedAsPrimeSum()) {
            cout << number << " can be expressed as the sum of two prime numbers." << endl;
        } else {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }

private:
    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    // Function to check if the number can be expressed as the sum of two primes
    bool canBeExpressedAsPrimeSum() {
        for (int i = 2; i <= number / 2; i++) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " = " << i << " + " << number - i << endl;
                return true;
            }
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Creating an object of PrimeSumChecker
    PrimeSumChecker checker(n);

    return 0;
}
