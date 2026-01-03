// task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool gravity = false;

void displayWorld(char field[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << field[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void setGravityStatus(bool status)
{
	gravity = status;
}

void timeTick(char field[5][5], int noOfTicks)
{
	if (! gravity)
	{
		return;
	}

	for (int t = 0; t < noOfTicks; t++)
	{
		for (int i = 3; i >= 0; i--)
		{
			for (int j = 0; j < 5; j++)
			{
				if (field[i][j] == '#' && field[i +1][j] == '-')
				{
					field[i + 1][j] = '#';
					field[i][j] = '-';
				}
			}
		}
	}
}

int main()
{
    char field[5][5] = { {'-', '#', '#', '-', '#'}, {'#', '-', '-', '#', '-'}, {'-', '#', '-', '-', '-'}, {'#', '-', '#', '-', '#'}, {'#', '-', '-', '-', '-'} };
   
	int noOfTicks = 3;

	cout << "Original world : " << endl;
	displayWorld(field);
	
	setGravityStatus(true);

	timeTick(field, noOfTicks);

	cout << "World after three ticks : " << endl;
	displayWorld(field);

    return 0;
}