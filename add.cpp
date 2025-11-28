#include <iostream>
using namespace std;
int addNumbers(int a,int b);

int main()
{
    int x,y,sum;
    cout<<"Enter two Numbers= ";
    cin>>x>>y;
    sum= addNumbers(x,y);
    cout<<"The sum of two numbers are= "<<sum;
    return 0;
}

int addNumbers(int a,int b)
{
    return a+b;
}
