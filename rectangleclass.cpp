#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // a) Default constructor
    Rectangle() : length(1), width(1) {}

    // b) Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // c) Function to calculate area
    double calculateArea() const {
        return length * width;
    }

    // d) Display function
    void display() const {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Area: " << calculateArea() << endl;
    }
};

int main() {
    // Using default constructor
    Rectangle r1;
    cout << "Default Rectangle:\n";
    r1.display();

    // Using parameterized constructor
    Rectangle r2(5.5, 3.2);
    cout << "\nCustom Rectangle:\n";
    r2.display();

    return 0;
}
