//Name: Data Files Part 2 Example 5 - Create
//Date Created: 5/17/19
//Programmer Name: Gabby Clemente

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <iomanip>

using std::ofstream;
using std::ios;
using namespace std;

void main()
{
	int x;
	char name[10];
	char major[15];

	ofstream outfile;
	outfile.open("H:\\C++ Files\\CHARGES.DAT", ios::out);

	if (outfile)
	{
		cout << "Please enter Student Name: ";
		cin >> name;
		outfile << name << endl;

		cout << "Please enter Student Major: ";
		cin >> major;
		outfile << major << endl;
		cout << endl;

		do
		{
			outfile << endl;
			cout << "Please enter Student Name: ";
			cin >> name;
			outfile << name << endl;

			cout << "Please enter Student Major: ";
			cin >> major;
			outfile << major;
			cout << endl;

			cout << "Enter 0 to quit or 1 to continue: ";
			cin >> x;
			cout << endl;

		} while (x != 0);
	}
	else
	{
		cout << "Error opening the file." << endl;
	}
	outfile.close();
}