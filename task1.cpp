// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of courses: ";
    cin >> n;
    cin.ignore();

    fstream file1, file2;

    file1.open("courses_file1.txt", ios::out);
    file2.open("courses_file2.txt", ios::out);

    string code, name, status;
    int credit, semester;

    for (int i = 0; i < n; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Course Code: ";
        getline(cin, code);

        cout << "Course Name: ";
        getline(cin, name);

        cout << "Credit Hours: ";
        cin >> credit;

        cout << "Semester: ";
        cin >> semester;
        cin.ignore();

        cout << "Status: ";
        getline(cin, status);

        file1 << code << "," << name << ","
            << credit << "," << semester << ","
            << status << endl;

        file2 << code << " " << name << " "
            << credit << " " << semester << " "
            << status << endl;
    }

    file1.close();
    file2.close();

    cout << "\nFiles created successfully." << endl;

    return 0;
}
