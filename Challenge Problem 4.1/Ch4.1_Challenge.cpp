/*
*
* Challenge Problem 4.1 - ATM (Again)
* CIS-276-E010
* 
* Project By:
*	- Aleksandar Kljaic - http://github.com/Hexers/
*
* Original Program from Challenge Problem 14.1.2
* https://github.com/Hexers/CIS-276-Fall2016/tree/master/Challenge%20Problem%2014.1.2
* 
* 
* 
* _______________________________________________________________________________
*	Using what we know about inputs and outputs, and output formatting
*	we practiced in Chapter 3 to code the previous case study interaction
*	used in class for the ATM - only this time use SELECTION in the form
*	of IF ELSE. Your ATM will start with only $500 to give out, and YOUR
*	balance will be 1000. The amounts the ATM can dispense are shown below. 
*	After you've received your disbursement, the console will show the amount
*	you have left in your account, as well as how much the ATM has to dispense
*	(we live in a small, fictional town - STILL no one will use this information
*	for nefarious purposes).
* _______________________________________________________________________________
*
* Which way was easier to code? 
*
* This example was easier.
*
* You may choose to use characters to show the interface,
* or just list the options for the user at the console.
*
* 
* _______________________________________________________________________________
* 
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <Windows.h>

using namespace std;

int main ()
{
	SetConsoleTitle( TEXT( "ATM - Again... - Aleksandar Kljaic")); // Quite honestly, I just wanted to see how it worked.

	// Variables Part 1
	int withdrawChoice;

	// Variables Part 2
	double myCurrentBalance = 0.0;
	double atmCurrentBalance = 0.0;
	double myWallet = 0.0;

	// Variables for Starting Balances
	double myStartingBalance = 1000;
	double atmStartingBalance = 500;

	// Variables to hold value of withdrawls
	double optionOneHundred = 100; // $100
	double optionTwoHundred = 200; // $200
	double optionFourHundred = 400; // $400
	double optionFiveHundred = 500; // $500

	do // do-while loop starts here
	{
		// Displaying Options for Withdrawl Screen
		cout <<"\t\tWithdrawal Screen" << endl << endl;
		cout << "(1) $100" << endl; // optionOneHundred
		cout << "(2) $200" << endl; // optionTwoHundred
		cout << "(3) $400" << endl; // optionFourHundred
		cout << "(4) $500" << endl; // optionFiveHundred
		cout << "(5) Exit Program" << endl << endl; // Exits Program

		// Prompting user to enter a choice according to Withdrawl Screen
		cout << "Enter your choice: " << endl; // User input 1 - 5
		cin >> withdrawChoice; // User input 1 - 5

		if(withdrawChoice == 1)
		{
			//calculation for $100
			system("CLS");
			cout << "You selected to withdraw $" << optionOneHundred << endl;

			myCurrentBalance = myStartingBalance - optionOneHundred;
			cout << "Your Current Account Balance is: $" << myCurrentBalance << endl; 
    
			atmCurrentBalance = atmStartingBalance - optionOneHundred;
			cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;

			myWallet = optionOneHundred;
			cout << "You now have $" << myWallet << " in your wallet." << endl;
			system("PAUSE");
			system("CLS");
		}
		else if(withdrawChoice == 2)
		{
			//calculation for $200
			system("CLS");
			cout << "You selected to withdraw $" << optionTwoHundred << endl;

			myCurrentBalance = myStartingBalance - optionTwoHundred;
			cout << "Your Current Account Balance is: $" << myCurrentBalance << endl;

			atmCurrentBalance = atmStartingBalance - optionTwoHundred;
			cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;

			myWallet = optionTwoHundred;
			cout << "You now have $" << myWallet << " in your wallet." << endl;
			system("PAUSE");
			system("CLS");
		}
		else if(withdrawChoice == 3)
		{
			//calculation for $400
			system("CLS");
			cout << "You selected to withdraw $" << optionFourHundred << endl;

			myCurrentBalance = myStartingBalance - optionFourHundred;
			cout << "Your Current Account Balance is: $" << myCurrentBalance << endl;

			atmCurrentBalance = atmStartingBalance - optionFourHundred;
			cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;

			myWallet = optionFourHundred;
			cout << "You now have $" << myWallet << " in your wallet." << endl;
			system("PAUSE");
			system("CLS");
		}
		else if(withdrawChoice == 4)
		{
			//calculation for $500
			system("CLS");
			cout << "You selected to withdraw $" << optionFiveHundred << endl;

			myCurrentBalance = myStartingBalance - optionFiveHundred;
			cout << "Your Current Account Balance is: $" << myCurrentBalance << endl;

			atmCurrentBalance = atmStartingBalance - optionFiveHundred;
			cout << "The ATM's Current Balance is: $" << atmCurrentBalance << endl;

			myWallet = optionFiveHundred;
			cout << "You now have $" << myWallet << " in your wallet." << endl;
			system("PAUSE");
			system("CLS");
		}
		else if(withdrawChoice == 5)
		{
			system("CLS");
			cout << "Program is exiting." << endl;
			return 0;
		}
		else
		{
			// Error Message
			system("CLS");
			cout << "Invalid Choice!" << endl;
			system("PAUSE");
			system("CLS");
		}

	}
	while(withdrawChoice != 5); 

	return 0;
}
/* 
********************
*  End of program  *
********************
*/