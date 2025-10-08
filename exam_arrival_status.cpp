#include <iostream>
using namespace std;

int main() {
    int eh, em, ah, am;  
    cout << "Exam hour: ";
    cin >> eh;
    cout << "Exam minutes: ";
    cin >> em;
    cout << "Arrival hour: ";
    cin >> ah;
    cout << "Arrival minutes: ";
    cin >> am;

    int tExam = eh * 60 + em;
    int tArr = ah * 60 + am;
    int d = tArr - tExam;

    if (d == 0) {
        cout << "On time";
    }
    else if (d > 0) {
        cout << "Late" << endl;
        if (d < 60) {
            cout << d << " minutes after the start";
        }
        else {
            cout << d / 60 << " hours and " << d % 60 << " minutes after the start";
        }
    }
    else {
        d = -d;
        if (d <= 30) {
            cout << "On time" << endl;
            cout << d << " minutes before the start";
        }
        else {
            cout << "Early" << endl;
            if (d < 60) {
                cout << d << " minutes before the start";
            }
            else {
                cout << d / 60 << " hours and " << d % 60 << " minutes before the start";
            }
        }
    }

    return 0;
}
