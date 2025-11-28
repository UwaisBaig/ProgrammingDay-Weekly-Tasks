#include <iostream>
using namespace std;
double getRadius();
double circleArea(double radius);

int main()
{
    double z= getRadius();
    double area = circleArea(z);
    cout<<"Area of Circle= "<<area;
    return 0;

}

double getRadius()
{
    double r;
    cout<<"Enter radius= ";
    cin>> r;
    return r;
}
double circleArea(double radius)
{
    double area = 3.14159*radius*radius;
    return area;
}
