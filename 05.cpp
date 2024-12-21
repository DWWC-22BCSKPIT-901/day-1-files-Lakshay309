#include <iostream>
#include <iomanip>  // for setting precision
using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double area(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double radius, base, height;
    int length, breadth;

    // Input for the circle
    cin >> radius;
    // Input for the rectangle
    cin >> length >> breadth;
    // Input for the triangle
    cin >> base >> height;

    // Print the areas with a fixed precision of 5 decimal places
    cout << fixed << setprecision(5);
    cout << area(radius) << endl;
    cout << area(length, breadth) << endl;
    cout << area(base, height, true) << endl;

    return 0;
}
