#include<iostream>
using namespace std;

int main(){
    string temp , hum;
    cout << "If temperature is: "<<endl;
    cin >> temp;
    cout << "If humidity is: " << endl;
    cin >> hum;
    if (temp == "warm")
    {
        if(hum == "dry")
        {
            cout << "Play tennis"<<endl;
        }
        else
            cout << "Swim"<<endl;
    }

    if (temp =="cold")
    {
        if (hum == "dry")
            cout<<"Play basketball" << endl;
        else
            cout<<"Watch Tv" <<endl;
    }
    return 0;
}