// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string colours[5] = { "Red","Black", "Brown", "Blue", "Grey" };
    int suzukiQuantity[5] = { 10, 7, 12, 10, 4 };
    int toyotaQuantity[5] = { 18, 11, 15, 17, 2 };
    int nissanQuantity[5] = { 23, 19, 12, 16, 14 };
    int bmwQuantity[5] = { 7, 12, 16, 0, 2 };
    int audiQuantity[5] = { 3, 5, 6, 2, 1 };

    int carData[5][5] = {{ 10, 7, 12, 10, 4 }, { 18, 11, 15, 17, 2 }, { 23, 19, 12, 16, 14 }, { 7, 12, 16, 0, 2 }, { 3, 5, 6, 2, 1 }};

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << carData[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}