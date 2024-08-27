#include <iostream>
using namespace std;

// Define a class named "Rectangle"
class Rectangle {
private:
    // Private member variables
    int width;
    int height;

public:
    // Constructor to initialize the width and height
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

      
    int area() {
        return width * height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
	
    Rectangle rect(10, 5);

  
    rect.display();

    cout << "Area: " << rect.area() << endl;

    return 0;
}
