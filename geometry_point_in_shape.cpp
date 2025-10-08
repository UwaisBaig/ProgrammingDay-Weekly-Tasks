#include <iostream>
using namespace std;

int main() {
    int h, x, y;
    cout << "Enter h: ";
    cin >> h;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    int inL = (x > 0 && x < 3*h && y > 0 && y < h);
    int inU = (x > h && x < 2*h && y > h && y < 4*h);
    int bL = ((x >= 0 && x <= 3*h && (y == 0 || y == h)) || (y >= 0 && y <= h && (x == 0 || x == 3*h)));
    int bU = ((x >= h && x <= 2*h && (y == h || y == 4*h)) || (y >= h && y <= 4*h && (x == h || x == 2*h)));

    if (bL || bU) {
        cout << "Border";
    }
    else if (inL || inU) {
        cout << "Inside";
    }
    else {
        cout << "Outside";
    }

    return 0;
}
