#include <iostream>
using namespace std;

int main(){
    double red,white,tulips,price,disc_price,fprice;

    cout<<"Red Rose: ";
    cin >> red;

    cout<<"White Rose: ";
    cin >> white;

    cout<<"Tulips: ";
    cin >> tulips;

    price= (red * 2.00) + (white * 4.10) + (tulips * 2.50);

    if(price > 200)
    {
        disc_price = price * 0.2;
        fprice = price - disc_price;
        cout<<"Original price: "<< price<<endl;
        cout<<"Discounted price: "<< fprice<<endl;
    }
    else
    {
        cout<<"Original price: "<< price<<endl;
        cout<<"Discounted price: "<< fprice<<endl;
    }

    return 0;
}
