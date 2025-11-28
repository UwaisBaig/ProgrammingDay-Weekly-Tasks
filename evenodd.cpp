#include <iostream>
using namespace std;
bool isEven(int num);

int main()
{
    int number;
    cout<<"Enter a Number= ";
    cin>>number;
    if(isEven(number)==true)
    cout<<"Number is even";
    else
    cout<<"Number is odd";

}

bool isEven(int num)
{
    if(num%2==0)
    return true;
    else
    return false;
}
