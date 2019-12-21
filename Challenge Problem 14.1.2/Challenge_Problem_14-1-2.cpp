// My Original Copy

/*
*  Challenge Problem 14.1.2
*  
*  Aleksandar Kljaic
*  September 22, 2016
*
* Using what you know about inputs and outputs, code the case study
* interaction used in class. Your ATM will start with only $500 to
* give out, and YOUR balance will be $1000. The amounts the ATM can
* dispense are $40, $80, $120, $200, and $400. After you've received
* your disbursement, the console will show the amount you have left
* in your account, as well as how much the ATM has to dispense (we 
* live in a small, fictional town - no one will use this information 
* for nefarious purposes).
*
* You may choose to use characters to show the interface, or just list
* the options for the user at the console.
*/

#include <iostream>
#include <iomanip> // setw(), fixed, showpoint, setprecision, left, right
#include <cmath>
#include <string> // string class library
using namespace std;
void showMenu();
int mainMenuSelection(int);

// Variables for Current Balances
double myCurrentBalance = 0.0;
double atmCurrentBalance = 0.0;

// Variables for Starting Balances
double myStartingBalance = 1000;
double atmStartingBalance = 500;

// Variables to hold value of withdrawls
double optionForty = 40;
double optionEighty = 80;
double optionOneHundredTwenty = 120;
double optionTwoHundred = 200;
double optionFourHundred = 400;



int main ()
{
	int choice;
	cout << fixed << showpoint << setprecision(2);
	do
	{
		showMenu(); // Shows Main Menu
		cin >> choice;
		while (choice < 1 || choice > 2) // Choosing between Withdrawl and Exit
		{
			cout << "Please choose (1) or (2) "; //Obviously Print Line
			cin >> choice; // User input for choice of 1 or 2
		}
		mainMenuSelection(choice);
	} while (choice != 2);
	return 0;
}
	
void showMenu()
	{
		cout << endl << "\t\tMain Menu Screen" << endl << endl;
		cout << "(1) Withdrawal" << endl;
		cout << "(2) Exit ATM" << endl << endl;
		cout << "Enter your choice: ";
	}
	
int mainMenuSelection(int choice) // Withdrawl Screen
	{
		int withdrawChoice;
		switch (choice)
		{
		case 1:
			do
			{
				cout <<"\t\tWithdrawal Screen" << endl << endl;
				cout << "(1) $40" << endl; // optionForty
				cout << "(2) $80" << endl; // optionEighty
				cout << "(3) $120" << endl; // optionOneHundredTwenty
				cout << "(4) $200" << endl; // optionTwoHundred
				cout << "(5) $400" << endl; // optionFourHundred
				cout << "(6) Back to Main Menu" << endl;
				cout << "Enter your choice: ";
				cin >> withdrawChoice; // User input 1 - 6
				while (withdrawChoice < 1 || withdrawChoice > 6) // Chosing
				{
					cout << "Please choose (1), (2), (3), (4), (5), or (6): ";
					cin >> withdrawChoice; // User input 1 - 6
				}
			} while (choice != 1);
			if (choice == 1) // If user chooses (1)
			{
				// Calculation for Withdrawl of $40 from my balance
				myCurrentBalance = myStartingBalance - optionForty;
				cout << "Your Current Balance is: $" << myCurrentBalance << endl;

				// Calculation for Withdrawl of $40 from atm balance
				atmCurrentBalance = atmStartingBalance - optionForty;
				cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;
				break;
			}
			if (choice == 2)
			{
				//calculation for $80
				myCurrentBalance = myStartingBalance - optionEighty	;
				cout << "Your Current Balance is: $" << myCurrentBalance << endl;

				atmCurrentBalance = atmStartingBalance - optionEighty;
				cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;
				break;
			}
			if (choice == 3)
			{
				//calculation for $120
				myCurrentBalance = myStartingBalance - optionOneHundredTwenty;
				cout << "Your Current Balance is: $" << myCurrentBalance << endl;

				atmCurrentBalance = atmStartingBalance - optionOneHundredTwenty;
				cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;
				break;
			}
			if (choice == 4)
			{
				//calculation for $200
				myCurrentBalance = myStartingBalance - optionTwoHundred;
				cout << "Your Current Balance is: $" << myCurrentBalance << endl;

				atmCurrentBalance = atmStartingBalance - optionTwoHundred;
				cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;
				break;
			}
			if (choice == 5)
			{
				//calculation for $400
				myCurrentBalance = myStartingBalance - optionFourHundred;
				cout << "Your Current Balance is: $" << myCurrentBalance << endl;

				atmCurrentBalance = atmStartingBalance - optionFourHundred;
				cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;
				break;
			}
			if (choice == 6)
			{
				showMenu();
			}
			break;
		case 2:
			cout << "ATM Transaction is ending. Program Exiting." << endl << endl;
			break;
		}
		return choice;
	}
