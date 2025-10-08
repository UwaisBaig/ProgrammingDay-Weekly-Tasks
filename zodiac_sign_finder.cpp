#include <iostream>
using namespace std;
int main()
{
    string month;
    int day;
    cout << "Hello! Please type in your birth month and birth day.\n";
    cin >> month >> day;
  
    
    if (( month == "january" && day >= 20) || ( month == "february" && day <=18))
    {
         cout << "Your zodiac sign is Aquarius & your symbol is Water Bearer" << endl;
         
    }
    else if (( month == "february" && day >= 19) || ( month == "march" && day <= 20))
    {
         cout << "Your zodiac sign is Pisces and your symbol is Fishes" << endl;
    }
    else if (( month == "march" && day >= 21) || ( month == "april" && day <= 19))
    {
         cout << "Your zodiac sign is Aries and your symbol is The RAM" << endl;
    }
    else if (( month == "april" && day >= 20) || ( month == "may" && day <= 20))
    {
         cout << "Your zodiac sign is Taurus and your symbol is The Bull"<< endl;
    }
    else if (( month == "may" && day >= 21 ) || ( month == "june" && day <= 20 ))
    {
         cout << "Your zodiac sign is Gemini and your symbol is The Twins" << endl;
    }
    else if (( month == "june" && day >= 21 ) || ( month == "july" && day <= 22 ))
    {
         cout << "Your zodiac sign is Cancer and your symbol is The Crab" << endl;
    }
    else if (( month == "july" && day >= 23 ) || ( month == "august" && day <= 22))
    {
         cout << "Your zodiac sign is Leo and your symbol is The Lion " << endl;
    }
    else if (( month == "august" && day >= 23 ) || ( month == "september" && day <= 22 ))
    {
         cout << "Your zodiac sign is Virgo and your symbol is The Virgin " << endl;
    }
    else if (( month == "september" && day >= 23 ) || ( month == "october" && day <= 22))
    {
         cout << "Your zodiac sign is Libra and your symbol is The Scale" << endl;
    }
    else if (( month == "october" && day >= 23 ) || ( month == "november" && day <= 21))
    {
         cout << "Your zodiac sign is Scorpio and your symbol is The Scorpion" << endl;
    }
    else if (( month == "november" && day >= 22 ) || ( month == "12" && day <= 21))
    {
         cout << "Your zodiac sign is Sagittarius and your symbol is The Archer " << endl;
    }
    else if (( month == "december" && day >= 22 ) || ( month == "january" && day <= 19 ))
    {
         cout << "Your zodiac sign is Capricorn and your symbol is The Goat " << endl;
    }
    else 
        cout<<"INVALID SYNTAX";
    
    return 0;

}