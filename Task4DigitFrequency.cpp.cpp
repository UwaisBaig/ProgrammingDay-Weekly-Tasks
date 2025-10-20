#include<iostream>
using namespace std;
int main() {
    int n, d, rem, count = 0;
    cout<<"Enter a number: ";
    cin >> n;
    cout<<"Enter the Digit to count: ";
    cin >>d;
    while(n != 0) {
        rem = n % 10;
        if(rem == d) count++;
        n = n / 10;
    }
    cout <<"Frequency: " <<count;
    return 0;
}