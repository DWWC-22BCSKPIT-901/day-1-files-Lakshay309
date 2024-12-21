#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

double areaOfRectangle(double length, double width) {
    return length * width;
}

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Choose the shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of Circle: " << areaOfCircle(radius) << endl;
    } else if (choice == 2) {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of Rectangle: " << areaOfRectangle(length, width) << endl;
    } else if (choice == 3) {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of Triangle: " << areaOfTriangle(base, height) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
