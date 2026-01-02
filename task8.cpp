// task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("pattern3.pgm", ios::out);


    file << "P2\n";
    file << "256 256\n";
    file << "255\n";

    for (int row = 0; row < 256; row++)
    {
        for (int col = 0; col < 256; col++)
        {
            int blockRow = row / 32;
            int blockCol = col / 32;
            int value = (blockRow + blockCol) % 2;

            if (value == 0)
                value = 30;
            else
                value = 225;

            file << value << " ";
        }

        file << endl;
    }

    file.close();

    return 0;
}