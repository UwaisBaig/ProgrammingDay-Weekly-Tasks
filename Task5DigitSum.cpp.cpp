#include<iostream>
using namespace std;
int main() {
    int num, rem, sum = 0;
    cout<<"Enter a Number: ";
    cin >> num;
    while(num != 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout <<"The sum of the Digits: " <<sum;
    return 0;
}