#include <iostream>
using namespace std;
void timesTen(int);

int main()
{
    int num,times;
    cout<<"Enter a number=";
    cin>>num;
    timesTen(num);
}

void timesTen(int number)
{
    int result = number*10;
    cout<<"Result: "<<result<<endl;
}
