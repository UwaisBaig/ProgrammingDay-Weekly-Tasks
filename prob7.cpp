#include <iostream>
#include <cmath>    // for M_PI (π)
using namespace std;

int main() {
    string figure;
    cout << "Enter figure type (square, rectangle, circle, triangle): ";
    cin >> figure;

    double area = 0;

    if (figure == "square") {
        double side;
        cout << "Enter side length: ";
        cin >> side;
        area = side * side;
    }
    else if (figure == "rectangle") {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        area = length * width;
    }
    else if (figure == "circle") {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        area = M_PI * radius * radius;
    }
    else if (figure == "triangle") {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        area = 0.5 * base * height;
    }
    else {
        cout << "Invalid figure type!" << endl;
        return 0;
    }

    cout << "Area = " << area << endl;
    return 0;
}
