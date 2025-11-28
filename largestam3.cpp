#include <iostream>
using namespace std;
int largest(int a,int b,int c);

int main()
{
    int x,y,z;
    cout<<"Enter three Numbers= ";
    cin>>x>>y>>z;
    cout<<"The largest number is= "<<largest(x,y,z);
    return 0;
}

int largest(int a,int b,int c)
{
    if(a>b&&a>c)
    return a;
    else if(b>a&&b>c)
    return b;
    else
    return c;
}
