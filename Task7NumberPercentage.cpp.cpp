#include<iostream>
using namespace std;
int main() {
    int n, num, i = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    cout << "Enter numbers counts: ";
    cin >> n;
    while(i < n) {
        cout<<"Enter a number: ";
        cin >> num;
        if(num < 200) c1++;
        else if(num < 400) c2++;
        else if(num < 600) c3++;
        else if(num < 800) c4++;
        else c5++;
        i++;
    }
    cout << c1 * 100.0 / n << "%" << endl;
    cout << c2 * 100.0 / n << "%" << endl;
    cout << c3 * 100.0 / n << "%" << endl;
    cout << c4 * 100.0 / n << "%" << endl;
    cout << c5 * 100.0 / n << "%" << endl;
    return 0;
}