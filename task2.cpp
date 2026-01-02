// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("strips1.pgm", ios::out);

    if (!file)
    {
        cout << "File could not be created!" << endl;
        return 0;
    }

    file << "P2\n";
    file << "256 256\n";
    file << "3\n";

    for (int i = 0; i < 256; i++)
    {
        int value;

        if (i < 64)
        {
            value = 2;
        }
        else if (i < 128)
        {
            value = 0;
        }
        else if (i < 192)
        {
            value = 3;
        }
        else
        {
            value = 1;
        }

        for (int j = 0; j < 256; j++)
        {
            file << value << " ";
        }

        file << endl;
    }

    file.close();

    return 0;
}