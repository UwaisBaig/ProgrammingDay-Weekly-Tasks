#include <iostream>
using namespace std;

int main(){
    char ser,time;
    int min, dayMin, nightMin;
    double charges;

    cout<<"Enter which type of customer you are (Residental  or Premium) : ";
    cin >> ser;
    cout << "(Press 'D' for daytime and 'N' for night time) : ";
    cin >> time;

    if (ser == 'r' || ser =='R' ) 
    {
        cout << "Enter the number of minutes the service is used : ";
        cin >> min;

        charges = 10;
        if (min>50)
        {
            charges = charges + (min - 50) * 0.2;
            cout << "The charges are: " << charges ;
        }
        
    }

if (ser == 'p' || ser =='P' ) 
    {
        

        if (time =='D' || time =='d')
        {
            cout << "Enter the number of minutes the service is used (during the day ): ";
            cin >> dayMin;
            charges = 25;
            if (dayMin>75)
            {
                charges = charges + (dayMin - 75) * 0.1;
                cout << "The charges are: " << charges ;
            }
            else 
                cout << "The Charges are: "<< charges;
        }

        if (time =='N'|| time =='n')
        {
            cout << "Enter the number of minutes the service is used (during the night ): ";
            cin >> nightMin;
            charges = 25;
            if (nightMin>100)
            {
                charges = charges + (nightMin - 100) * 0.05;
                cout << "The charges are: " << charges ;
            }
            else
                cout<< "The charges are: " << charges;
        }
        
    }

    return 0; 
}