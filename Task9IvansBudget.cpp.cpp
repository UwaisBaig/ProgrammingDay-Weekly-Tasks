#include<iostream>
using namespace std;
int main() {
    double money;
    int year;
    cout<<"Enter Money: ";
    cin >> money;
    cout<<"Enter Year: ";
    cin>> year;
    int currentYear = 1800;
    int age = 18;
    while(currentYear <= year) {
        if(currentYear % 2 == 0) money = money - 12000;
        else money = money - (12000 + 50 * age);
        currentYear++;
        age++;
    }
    if(money >= 0) cout << "Yes! He will live a carefree life and will have " << money << " dollars left.";
    else cout << "He will need " << -money << " dollars to survive.";
}