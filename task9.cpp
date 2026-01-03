// task9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int identicalRowCount(int matrix[3][3])
{
	int count = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			bool identical = true;
			for (int k = 0; k < 3; k++)
			{
				if (matrix[i][k] != matrix[j][k])
				{
					identical = false;
					break;
				}
			}
			if (identical)
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
    int matrix[3][3];

	for (int i = 0; i< 3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter element at position [" << i << "][" << j << "] : ";
			cin >> matrix[i][j];
		}
	}

	cout << "The entered matrix is : " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	identicalRowCount(matrix);
	int result = identicalRowCount(matrix);
	cout << "------------------------------------------------------------" << endl;
	cout << "The number of identical rows are : " << result << endl;
	cout << "------------------------------------------------------------" << endl;

    return 0;
}