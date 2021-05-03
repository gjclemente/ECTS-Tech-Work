//Name: Data Files Program 1 - Write
//Date Created: 5/15/19
//Programmer Name: Gabby Clemente
//PUrpose: This program writes the code for employee sales data

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
	char emp_type[2];
	int emp_sales;
	ofstream outfile;
	outfile.open("H:\\C++ Files\\EMPLOY.DAT", ios::out);

	if (outfile)
	{

		cout << "Enter the employee number: ";
		cin >> emp_number;
		outfile << emp_number << endl;
		cout << "Enter the employee name: ";
		cin >> emp_name;
		outfile << emp_name << endl;
		cout << "Enter the employee type: ";
		cin >> emp_type;
		outfile << emp_type << endl;
		cout << "Enter the employee sales: ";
		cin >> emp_sales;
		outfile << emp_sales;
		cout << endl;


		do
		{
			outfile << endl;
			cout << "Enter the employee number: ";
			cin >> emp_number;
			outfile << emp_number << endl;
			cout << "Enter the employee name: ";
			cin >> emp_name;
			outfile << emp_name << endl;
			cout << "Enter the employee type: ";
			cin >> emp_type;
			outfile << emp_type << endl;
			cout << "Enter the employee sales: ";
			cin >> emp_sales;
			outfile << emp_sales;
			cout << endl;
			cout << "Enter 0 to quit or 1 to continue ";
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