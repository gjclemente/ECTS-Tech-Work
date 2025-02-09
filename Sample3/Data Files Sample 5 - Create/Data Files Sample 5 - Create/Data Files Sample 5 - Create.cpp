//Name: Data Files Sample 5 - Create
//Date Created: 5/15/19
//Programmer Name: Gabby Clemente

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using std::ofstream;
using std::ios;
using namespace std;

void main()
{
	int x;
	float balance;
	char acct_name[15];
	ofstream outfile;
	outfile.open("ACCT.DAT", ios::out);

	if (outfile)
	{
		cout << "Enter the Owner of the Account: ";
		cin >> acct_name;
		outfile << acct_name << endl;
		cout << "Enter the account balance: ";
		cin >> balance;
		outfile << balance;

		do
		{
			outfile << endl;
			cout << "Enter the Owner of the Account: ";
			cin >> acct_name;
			outfile << acct_name << endl;
			cout << "Enter the account balance: ";
			cin >> balance;
			outfile << balance;

			cout << "Enter 0 to quit or 1 to continue: ";
			cin >> x;
		} while (x != 0);
		outfile.close();
	}
	else
	{
		cout << "An error occurred while opening the file." << endl;
	}
}