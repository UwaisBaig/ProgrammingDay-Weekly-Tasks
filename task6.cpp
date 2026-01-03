// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void fire(string battleField[5][5], string coordinates)
{
    int row, column;

    cout << "Enter the coordinates row(A, B, C, D, E) and column(1, 2, 3, 4, 5) : ";
    cin >> coordinates;
    
    row = coordinates[0] - 'A';
    column = coordinates[1] - '1';

    if (battleField[row][column] == ".")
    {
        cout << "SPLASH !!!";
    }
    else if (battleField[row][column] == "*")
    {
        cout << "BOOM !!!";
    }
    else
    {
        cout << "Invlaid coordinates";
    }
}

int main()
{
    string battleField[5][5] = { {".", ".", ".", "*", "*"}, {".", "*", ".", ".", "."}, {".", "*", ".", ".", "."}, {".", "*", ".", ".", "."}, {".", ".", "*", "*", "."} };
    string coordinates;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << battleField[i][j] << "\t";
        }
        cout << endl;
    }

    fire(battleField, coordinates);

    return 0;
}