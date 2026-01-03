// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void toyotaBlue(int carsData[5][5])
{
    cout << "The number of Toyota Blue cars are : ";
    cout << carsData[1][3];
    cout << endl;
}

void redCars(int carsData[5][5])
{
    int sum = 0;

    for (int j = 0; j < 5; j++)
    {
        sum = sum + carsData[j][0];
    }
    cout << "The total number of red cars : " << sum << endl;
}

void totalNissan(int carsData[5][5])
{
    int sum = 0;

    for (int j = 0; j < 5; j++)
    {
        sum = sum + carsData[2][j];
    }
    cout << "The total number of Nissan cars : " << sum << endl;
}

void totalColourCars(int carsData[5][5])
{
    string choice;
    cout << "Enter the colour of car (Red, Black, Brown, Blue, Grey): ";
    cin >> choice;

    if (choice == "Red") 
    {
    int sum = 0;

    for (int j = 0; j < 5; j++)
    {
    sum = sum + carsData[j][0];
    }
    cout << "The total number of red cars : " << sum << endl;
    }
    else if (choice == "Black")
    {
        int sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum = sum + carsData[j][1];
        }
        cout << "The total number of black cars : " << sum << endl;
    }
    else if (choice == "Brown")
    {
        int sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum = sum + carsData[j][2];
        }
        cout << "The total number of brown cars : " << sum << endl;
    }
    else if (choice == "Blue")
    {
        int sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum = sum + carsData[j][3];
        }
        cout << "The total number of blue cars : " << sum << endl;
    }
    else if (choice == "Grey")
    {
        int sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum = sum + carsData[j][4];
        }
        cout << "The total number of grey cars : " << sum << endl;
    }
    else
    {
        cout << "Invalid Colour!" << endl;
    }
}

void transpose(int carsData[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << carsData[j][i] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    string colours[5] = { "Red","Black", "Brown", "Blue", "Grey" };
    int suzukiQuantity[5] = { 10, 7, 12, 10, 4 };
    int toyotaQuantity[5] = { 18, 11, 15, 17, 2 };
    int nissanQuantity[5] = { 23, 19, 12, 16, 14 };
    int bmwQuantity[5] = { 7, 12, 16, 0, 2 };
    int audiQuantity[5] = { 3, 5, 6, 2, 1 };

    int carsData[5][5] = { { 10, 7, 12, 10, 4 }, { 18, 11, 15, 17, 2 }, { 23, 19, 12, 16, 14 }, { 7, 12, 16, 0, 2 }, { 3, 5, 6, 2, 1 } };
    
    toyotaBlue(carsData);
    redCars(carsData);
    totalNissan(carsData);
    totalColourCars(carsData);
    transpose(carsData);
    return 0;
}