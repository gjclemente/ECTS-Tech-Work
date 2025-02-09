//Name: Data Files Sample 5 - Find
//Date Created: 5/15/19
//Programmer Name: Gabby Clemente

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>

using std::ofstream;
using std::ios;
using namespace std;

void main()
{
	char name_to_find[15];
	int found_it;
	float balance;
	char acct_owner[15];
	found_it = 0;
	ifstream infile;
	infile.open("H:\\C++ FILES\\ACCT.DAT", ios::in);
	cout << fixed;
	cout << "Please enter the Customer Name to be found: ";
	cin.get(name_to_find, 15);
	cin.ignore(80, '\n');

	if (infile)
	{
		do
		{
			infile >> acct_owner;
			infile.ignore(80, '\n');
			infile >> balance;
			infile.ignore(80, '\n');

			if (strcmp(name_to_find, acct_owner) == 0)
			{
				cout << endl << endl << "Account Owner Name: " << acct_owner << endl;
				cout << "Account Balance: " << setprecision(2) << balance << endl << endl;
				found_it = 1;
			}
		} while (!infile.eof());
	}
	else
	{
		cout << "Error opening the file." << endl;
	}
	infile.close();

	if (found_it == 0)
	{
		cout << endl << endl << "ACCOUNT OWNDER NOT FOUND" << endl << endl;
	}
}