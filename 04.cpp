#include <iostream>
using namespace std;

const double PI = 3.14159;

double area(double radius) {
    return PI * radius * radius;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double radius, base, height;
    int length, breadth;

    cin >> radius;
    cin >> length >> breadth;
    cin >> base >> height;

    cout << fixed << area(radius) << endl;
    cout << area(length, breadth) << endl;
    cout << area(base, height, true) << endl;

    return 0;
}
