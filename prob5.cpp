#include <iostream>
#include <cmath>   // for abs()
using namespace std;

int main() {
    int hol, days, time, ftime;

    cout << "Holidays: ";
    cin >> hol;

    days = 365 - hol;
    time = (days * 63) + (hol * 127);
    ftime = abs(30000 - time);          

    int hours = ftime / 60;
    int mins = ftime % 60;

    if (time <= 30000) {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << mins << " minutes less for play" << endl;
    } else {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << mins << " minutes for play" << endl;
    }

    return 0;
}
