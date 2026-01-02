// task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("pattern2.pgm", ios::out);

    file << "P2\n";
    file << "256 256\n";
    file << "255\n";

    for (int row = 0; row < 256; row++)
    {
        for (int col = 0; col < 256; col++)
        {
            int blockRow = row / 16;
            int blockCol = col / 16;
            int value = (blockRow + blockCol) % 2;

            value = value * 255;

            file << value << " ";
        }

        file << endl;
    }

    file.close();
    return 0;
}