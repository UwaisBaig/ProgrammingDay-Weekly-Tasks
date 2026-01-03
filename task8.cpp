// task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void largestColumnFirst(int matrix[3][5])
{
	int maxSum = 0;
	int maxColumnIndex = 0;

	for (int i = 0; i < 3; i++)
	{
		maxSum = maxSum + matrix[i][0];
	}
	
	for (int j = 1; j < 5; j++)
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum = sum + matrix[i][j];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			maxColumnIndex = j;
		}
	}

	if (maxColumnIndex != 0)
	{
		for (int i = 0; i < 3; i++)
		{
			int temp = matrix[i][0];
			matrix[i][0] = matrix[i][maxColumnIndex];
			matrix[i][maxColumnIndex] = temp;
		}
	}
}

void printMatrix(int matrix[3][5])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
    int matrix[3][5];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Enter element at position [" << i << "][" << j << "] : ";
			cin >> matrix[i][j];
		}
	}

	cout << "The original matrix is : " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	largestColumnFirst(matrix);

	cout << "Matrix after largest column first : " << endl;
	printMatrix(matrix);

    return 0;
}