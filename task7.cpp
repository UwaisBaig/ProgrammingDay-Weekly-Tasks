// task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

bool checkGoal(int ballRow, int ballColumn)
{
    int leftPole = 5;
    int rightPole = 13;
    int crossbarRow = 4;

    bool betweenPoles = (ballColumn > leftPole && ballRow < rightPole);
    bool aboveCrossbar = (ballRow < crossbarRow);

    return betweenPoles && aboveCrossbar;
}

int main()
{
    string field[7][16] = { {" ", " "," ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", "#", " ", " "}, {" ", " "," ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", "#", " ", " "}, {" ", " "," ", " ", " ", "#", " ", " ", " ", " ", " ", " ", " ", "#", " ", " "}, {" ", " "," ", " ", " ", "#", "#", "#", "#", "#", "#", "#", "#", "#", " ", " "}, {" ", " "," ", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " "}, {" ", " "," ", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " "}, {" ", " "," ", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " ", " "} };
    string position;
    int ballRow, ballColumn;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            cout << field[i][j];
        }
        cout << endl;
    }
    
    cout << "Enter the position of ball Row(A, B, C, D, E, F, G) and Column(0-16) : ";
    cin >> position;

    ballRow = position[0] - 'A';
    ballColumn = stoi(position.substr(1)) - 1;

    checkGoal(ballRow, ballColumn);

    if (checkGoal(ballRow, ballColumn))
    {
        cout << "GOAL!" << endl;
    }
    else
    {
        cout << "NO GOAL!" << endl;
    }
    return 0;
}