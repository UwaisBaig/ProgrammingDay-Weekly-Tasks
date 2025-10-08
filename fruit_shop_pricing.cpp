#include <iostream>
using namespace std;

int main(){
    string day,fruit;
    int n;
    cout<<"Fruit: ";
    cin>>fruit;
    cout << "Day: ";
    cin>>day;
    cout<<"Number of fruits: ";
    cin>> n;

    if (day != "saturday"|| day != "sunday" )
    {
        double banana = 2.70;
        double apple = 1.25;
        double orange = 0.90;
        double grapefruit =1.60;
        double kiwi = 3.00;
        double pineapple = 5.60;
        double grapes = 3.85;
        
        double price = (banana * n) + (apple * n) + (orange *n) + (grapefruit *n) + (kiwi *n) + (pineapple * n) + (grapes *n);
        cout << price << endl;

    }
    else 
    {
        double banana = 2.50;
        double apple = 1.20;
        double orange = 0.85;
        double grapefruit =1.45;
        double kiwi = 2.70;
        
        double price = (banana * n) + (apple * n) + (orange *n) + (grapefruit *n) + (kiwi *n) (pineapple * n) + (grapes *n);
        cout << price << endl;

    }
}