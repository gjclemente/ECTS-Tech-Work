//Name: Data Files Sample 5 - Read
//Date Created: 5/15/19
//Programmer Name: Gabby Clemente

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using std::ofstream;
using std::ios;
using namespace std;

void main()
{
	float balance;
	char acct_owner[15];
	ifstream infile;
	infile.open("H:\\C++ FILES\\ACCT.DAT", ios::in);
	cout << fixed;

	if (infile)
	{
		do
		{
			infile >> acct_owner;
			infile.ignore(80, '\n');
			infile >> balance;
			infile.ignore(80, '\n');

			cout << "Account Owner Name: " << acct_owner << endl;
			cout << "Account Balance: " << setprecision(2) << balance << endl << endl;
		} while (!infile.eof());
	}
	else
	{
		cout << "Error opening the file." << endl;
	}
	infile.close();
}