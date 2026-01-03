// task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool gravity = false;
bool isBlackHole = false;

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

void setBlackHoleStatus(bool status)
{
	isBlackHole = status;
}

void timeTick(char field[5][5], int noOfTicks)
{
	if (!gravity)
	{
		return;
	}

	for (int t = 0; t < noOfTicks; t++)
	{
		for (int i = 4; i >= 0; i--)
		{
			for (int j = 0; j < 5; j++)
			{
				if (field[i][j] == '#')
				{
					int nextRow = i + 1;

					if (nextRow < 5)
					{
						if (field[nextRow][j] == '-')
						{
							field[nextRow][j] = '#';
							field[i][j] = '-';
						}
					}
					else
					{
						if (isBlackHole)
						{
							if (field[0][j] == '-')
							{
								field[0][j] = '#';
								field[i][j] = '-';
							}
						}
					}
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

	setBlackHoleStatus(true);

	timeTick(field, noOfTicks);

	cout << "World after three ticks (black hole is true) : " << endl;
	displayWorld(field);

	setBlackHoleStatus(false);
	timeTick(field, noOfTicks);

	cout << "World after three ticks (black hole is false) : " << endl;
	displayWorld(field);

	return 0;
}