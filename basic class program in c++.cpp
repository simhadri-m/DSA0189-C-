#include <iostream>
using namespace std;

// Define a simple class named "Student"
class Student {
public:
    // Public member variables
    string name;
    int age;

    // Member function to display student details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student1;

    // Assign values to the object's member variables
    student1.name = "SUNNY";
    student1.age = 20;

    // Call the member function to display the values
    student1.display();

    return 0;
}

