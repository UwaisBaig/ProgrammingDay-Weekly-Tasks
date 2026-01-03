// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printSum(int matrix[][3],int row)
{
	int sum = 0;

	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + matrix[i][j];
		}		
	}
	cout << "The sum of elements in the matrix: " << sum << endl;
}

int main()
{
	int row = 3;
	int matrix[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter the element : ";
			cin >> matrix[i][j];
		}
	}

	printSum(matrix, row);

	return 0;
}