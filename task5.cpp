// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void checkIdentity(int matrix[3][3], int count)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if(matrix[i][j] == 1)
			{
				count++;
			}
		}
	}
	if (count == 3)
	{
		cout << "The entered matrix is an Identity matrix" << endl;
	}
	else
	{
		cout << "The entered matrix is not an Identity matrix" << endl;
	}
}


int main()
{
    int matrix[3][3];
	int count = 0;

	cout << "Enter the elements of a matrix : " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter element at position [" << i << "]" << "[" << j << "] : ";
			cin >> matrix[i][j];
		}		
	}
	cout << endl;
	cout << "The matrix you entered is : " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	checkIdentity(matrix, count);

    return 0;
}