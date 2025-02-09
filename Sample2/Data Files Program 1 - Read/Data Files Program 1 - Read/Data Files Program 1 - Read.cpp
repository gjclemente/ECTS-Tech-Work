//Name: Data Files Program 1 - Read
//Date Created: 5/16/19
//Programmer Name: Gabby Clemente
//PUrpose: This program reads the employee data file

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cmath>

using std::ofstream;
using std::ios;
using namespace std;

int main()
{
	int x;
	int emp_number;
	char emp_name[28];
	char emp_type;
	int emp_sales;
	double pay = 0;
	ifstream infile;
	infile.open("H:\\C++ Files\\EMPLOY.DAT", ios::in);
	
	cout << "Employee\tEmployee\tEmployee\t\t\tCurrent" << endl;
	cout << "Number\t\tName\t\tType\t\tSales\t\tPay" << endl;
	cout << "-------------------------------------------------------------------------" << endl;

	if (infile)
	{

		do
		{
			infile >> emp_number;
			infile.ignore(80, '\n');
			infile >> emp_name;
			infile.ignore(80, '\n');
			infile >> emp_type;
			infile.ignore(80, '\n');
			infile >> emp_sales;
			infile.ignore(80, '\n');

			cout << fixed;

			if (emp_type == 'T')
			{
				pay = 500.00;
			}

			if (emp_type == 'P')
			{
				pay = 500.00 + (emp_sales * 0.1);
			}

			cout << emp_number << "\t\t" << emp_name << "\t\t" << emp_type << "\t\t" << emp_sales << "\t\t" << setprecision(2) << pay << endl;

		} while (!infile.eof());
	}

	else
	{
		cout << "Error opening the file." << endl;
	}

	infile.close();

}