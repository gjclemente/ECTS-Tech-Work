#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//********************************************************************
//*      Program Name:  Chapter 4 Sheet 2 Example 7                  *
//*      Programmer:    Gabby Clemente                               *
//*      File Location: H:\C++\Chapter 4 Sheet 2 Example 7           *
//*      Date Created:  3/13/19                                      *
//********************************************************************

int main()
{
	cout << "***********************************************************************************\n";
	cout << "*                                                                                 *\n";
	cout << "* This program gets from the user the total cost of their grocery bill.           *\n";
	cout << "*                                                                                 *\n";
	cout << "***********************************************************************************\n\n";

	double total_original_bill, original_card_discount, over_100_card_discount, total_cost_after_discounts, ten_percent_discount;
	string have_card;

	//Gets user data to retrieve grocery bill before discounts and asks if customer has a card

	cout << "Please enter your Total Grocery Bill: ";
	cin >> total_original_bill;
	cout << endl;

	cout << "Do you have a 'Super Saver' Card? Please enter 'Yes' or 'No': ";
	cin >> have_card;
	cout << endl;

	if (have_card == "Yes") //Customer has a card
	{
		if (total_original_bill > 100) //Calculates the total bill if the grocery cost was greater than $100
			{
				ten_percent_discount = total_original_bill - (total_original_bill * 0.1); // Calculates the cost after taking 10% off because they have a card
				total_cost_after_discounts = ten_percent_discount - (ten_percent_discount * 0.05); // Calculates the cost after taking 5% off because the total was over $100

				//Displays output
				cout << "Groceries: $" << fixed << showpoint << setprecision(2) << total_cost_after_discounts << endl;
				cout << "Card: " << have_card << endl;
			}

		if (total_original_bill <= 100)
			{
				total_cost_after_discounts = total_original_bill - (total_original_bill * 0.1); // Calculates the bill after taking 10% off because they had a card

				//Displays output
				cout << "Groceries: $" << fixed << showpoint << setprecision(2) << total_cost_after_discounts << endl;
				cout << "Card: " << have_card << endl;
			}
	}

	if (have_card == "No") //Customer doesn't have a card
		{
			//Calculates total bill if user doesn't have a card
			total_cost_after_discounts = total_original_bill;

			//Displays output
			cout << "Groceries: $" << fixed << showpoint << setprecision(2) << total_cost_after_discounts << endl;
			cout << "Card: " << have_card << endl;
		}
}
