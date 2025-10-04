#include <iostream>
using namespace std;

int main(){
    string name;
    int ticket_price,disc,fprice;

    cout<<"Country: ";
    cin>>name;

    cout<<"Total price: ";
    cin>>ticket_price;

    if (name == "Ireland")
    {
        disc = ticket_price * 0.1;
        fprice = ticket_price - disc;
        cout << "Discounted price: " << fprice << endl;
    }
    else
    {
        disc = ticket_price * 0.05;
        fprice = ticket_price - disc;
        cout<<"Discounted price: " << fprice << endl;
    }
    return 0;
}
