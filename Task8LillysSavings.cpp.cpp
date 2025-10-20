#include<iostream>
using namespace std;
int main() {
    int age, toyPrice;
    double washPrice;
    cout<<"Enter Lilly's Age: ";
    cin >> age;
    cout<<"Enter Price of Washing Machine: ";
    cin>> washPrice;
    cout<<"Unit Price of each toy: ";
    cin>> toyPrice;
    int i = 1, toys = 0, money = 0, even = 10;
    while(i <= age) {
        if(i % 2 == 0) {
            money = money + even - 1;
            even = even + 10;
        } else {
            toys++;
        }
        i++;
    }
    money = money + toys * toyPrice;
    if(money >= washPrice)
    cout << "Yes! " << money - washPrice;
    else
    cout << "No! " << washPrice - money;
    return 0;
}