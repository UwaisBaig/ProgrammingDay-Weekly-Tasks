#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int nights;
    double studio, apartment;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> nights;

    if (month == "May" || month == "October") {
        studio = 50 * nights;
        apartment = 65 * nights;
        if (nights > 14) {
            studio = studio - (studio * 0.30);
        }
        else if (nights > 7) {
            studio = studio - (studio * 0.05);
        }
    }
    else if (month == "June" || month == "September") {
        studio = 75.20 * nights;
        apartment = 68.70 * nights;
        if (nights > 14) {
            studio = studio - (studio * 0.20);
        }
    }
    else if (month == "July" || month == "August") {
        studio = 76 * nights;
        apartment = 77 * nights;
    }

    if (nights > 14) {
        apartment = apartment - (apartment * 0.10);
    }

    cout << "Apartment: " << apartment << "$" << endl;
    cout << "Studio: " << studio << "$" << endl;

    return 0;
}
