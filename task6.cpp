// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("strips4.pgm", ios::out);

    file << "P2\n";
    file << "256 256\n";
    file << "15\n";

    for (int row = 0; row < 256; row++)
    {
        for (int col = 0; col < 256; col++)
        {
            int value = col / 16;

            file << value << " ";
        }

        file << endl;
    }

    file.close();

    return 0;
}