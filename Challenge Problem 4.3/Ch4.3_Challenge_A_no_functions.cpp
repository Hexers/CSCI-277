/*
*
* Challenge Problem 4.3 - Vending Machine
* CIS-276-E010
* 
* Project By:
*	- Aleksandar Kljaic - http://github.com/Hexers/
* 
* _______________________________________________________________________________
* 
* Your challenge is to put together a vending machine knowing what you know about 
* formatted output, input, selection and repetition.
* 
* 
* Your vending machine will have the following:
* 
* a physical form using text / symbolic output to simulate an actual machine (10 points total)
* 
* top, bottom and sides represented (2.5pts)
* 
* two across selections (so, 2 different pops next to one another per row) (2.5pts)
* 
* descriptions of the selections and prices (5pts)
* 
* the machine will accept change and bills up to $20, nothing larger, and make correct change (5 points)
* 
* looping mechanism so the user can make as many selections as necessary (5points)
* 
* selection mechanism of your choice (5points)
* 
* good end user design evidenced by prompting that leads a user to a correct / complete interaction (5 points)
* 
* _______________________________________________________________________________
* NOTES *
* system("CLS); and system("PAUSE"); is only used as per the instructors instructions.
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
	SetConsoleTitle( TEXT( "Vending Machine - Aleksandar Kljaic")); // Quite honestly, I just wanted to see how it worked.

	// Variables Part 1
	int vendingChoice; // Variable for Choice
	double myWallet = 0.0; // Variable for inserting money

	// Variables Part 2
	double myChange = 0.0; // Variable for change back


	// Variables to hold value of Soda Prices
	double option1 = 1.11; // AMP
	double option2 = 1.22; // Monster
	double option3 = 1.33; // Nos
	double option4 = 2.14; // Mountain Dew
	double option5 = 2.25; // Pepsi Cola
	double option6 = 2.36; // Sprite
	double option7 = 3.17; // Coca Cola
	double option8 = 3.28; // Fanta
	double option9 = 3.39; // Mr. Pibb
	double option10 = 4.14; // Dasani
	double option11 = 4.24; // Fiji
	double option12 = 4.36; // Nestle

	do // do-while loop starts here
	{
		std:cout << std::setprecision(2) << std::fixed; // Precision

		// Displaying Options for Vending Screen
		cout << "\t\t\t| Vending Machine Screen |" << endl << endl; // Soda Machine Title
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(1) AMP" << setw(9) << "|" << "(4) Mountain Dew" << setw(5) << "|" << "(7) Coca Cola" << setw(5) << "|" << "(10) Dasani" << endl;
		cout << right << "" << setw(9) << "$1.11" << setw(7) << "|" << setw(4) << "" << "$2.14" << setw(12) << "|" << setw(4) << ""  << "$3.17" << setw(9) << "|" << setw(5) << ""  << "$4.14" << endl;
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(2) Monster" << setw(5) << "|" << "(5) Pepsi Cola" << setw(7) << "|"  <<"(8) Fanta" << setw(9) << "|"  << "(11) Fiji"   << endl;
		cout << right << "" << setw(9) << "$1.22" <<  setw(7) << "|" << setw(4) << ""  << "$2.25" << setw(12) << "|" << setw(4) << "" << "$3.28" << setw(9) << "|" << setw(5) << ""  << "$4.24" << endl;
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(3) Nos" << setw(9) << "|" << "(6) Sprite" << setw(11) << "|" << "(9) Mr. Pibb" << setw(6) << "|" << "(12) Nestle"  << endl;
		cout << right << "" << setw(9) << "$1.33" << setw(7) << "|" << setw(4) << ""  << "$2.36" << setw(12) << "|" << setw(4) << ""  << "$3.39" << setw(9) << "|" << setw(5) << ""  << "$4.36" << endl;

		cout << "_______________________________________________________________________" << endl;
		cout << endl;
		cout << "" << setw(45) << "_____________________" << endl;
		cout << "\t\t\t" << "| " << "(13) Exit Program" << " |" << endl; // Exits Program
		cout << "" << setw(45) << "_____________________" << endl;

		// Prompting user to enter a choice according to Vending Screen
		cout << "Enter your choice: " << endl; // User input 1 - 13
		cin >> vendingChoice; // User input 1 - 13
		if(vendingChoice == 1) // Choosing Option #1
		{
				//calculation for Beverage option1
				system("CLS");
				cout << "You selected Beverage #1 for $ " << option1 << endl;
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option1;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold AMP!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 2) // Choosing Option #2
		{

				//calculation for Beverage option2
				system("CLS");
				cout << "You selected Beverage #2 for $ " << option2 << endl;
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option2;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Monster!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 3) // Choosing Option #3
		{
				//calculation for Beverage option3
				system("CLS");
				cout << "You selected Beverage #3 for $ " << option3 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option3;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Nos!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 4) // Choosing Option #4
		{
				//calculation for Beverage option4
				system("CLS");
				cout << "You selected Beverage #4 for $ " << option4 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option4;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Mountain Dew!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 5) // Choosing Option #5
		{
				//calculation for Beverage option5
				system("CLS");
				cout << "You selected Beverage #5 for $ " << option5 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;		
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option5;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Pepsi Cola!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 6) // Choosing Option #6
		{
				//calculation for Beverage option6
				system("CLS");
				cout << "You selected Beverage #6 for $ " << option6 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;		
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option6;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Sprite!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 7) // Choosing Option #7
		{
				//calculation for Beverage option7
				system("CLS");
				cout << "You selected Beverage #7 for $ " << option7 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option7;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Coca Cola!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 8) // Choosing Option #8
		{
				//calculation for Beverage option8
				system("CLS");
				cout << "You selected Beverage #8 for $ " << option8 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option8;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Fanta!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 9) // Choosing Option #9
		{
				//calculation for Beverage option9
				system("CLS");
				cout << "You selected Beverage #9 for $ " << option9 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option9;
						// Output 
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Mr. Pibb!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 10) // Choosing Option #10
		{
				//calculation for Beverage option10
				system("CLS");
				cout << "You selected Beverage #10 for $ " << option10 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option10;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Dasani!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 11) // Choosing Option #11
		{
				//calculation for Beverage option11
				system("CLS");
				cout << "You selected Beverage #11 for $ " << option11 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option11;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Fiji!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS");
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE");
						system("CLS");
					}
		}
		else if(vendingChoice == 12) // Choosing Option #12
		{
				//calculation for Beverage option12
				system("CLS");
				cout << "You selected Beverage #12 for $ " << option12 << endl;	
				cout << "Please insert payment now." << endl << endl;
				cout << "Insert Bills or Coins: " << endl;
				cin >> myWallet;	
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - option12;
						// Output
						cout << endl; // Just an extra line
						cout << "You inserted $ " << myWallet << endl;
						cout << "Your change is $" << myChange << endl;
						cout << "Enjoy your cold Nestle!" << endl;
						system("PAUSE"); // Pauses the screen
						system("CLS"); // Clears the screen after you press any key
					}
					else
					{
						system("CLS"); // Clears Screen
						cout << "Please insert between $2.00 and $20.00" << endl;
						system("PAUSE"); // Pauses Screen
						system("CLS"); // Clears Screen
					}
		}
		else if(vendingChoice == 13) // Choosing Option #13
		{
				system("CLS");
				cout << "Program is exiting." << endl;
				return 0;
		}
		else
		{
			// Error Message for selection anything out of the 1 - 13 range
			system("CLS"); // Clears Screen
			cout << "Invalid Choice! Please try again." << endl;
			system("PAUSE"); // Pauses Screen
			system("CLS"); // Clears Screen
		}

	}
	while(vendingChoice != 13); 

	return 0;
}
/* 
********************
*  End of program  *
********************
*/