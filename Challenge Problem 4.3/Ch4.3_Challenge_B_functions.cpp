/*
*
* Challenge Problem 4.3b - Vending Machine
* 
* ATTENTION! ATTENTION! This program is updated to include functions. ATTENTION! ATTENTION! 
* 
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

// Global Variables being defined
double myWallet = 0.0;
double beveragePrice = 0.0;
int vendingChoice;
string beverageName;

// Function prototypes
void vendingdisplay();
void vendinginput();
void vendingerror();
int vendingoutput();
void vendingend();

// Functions start here
void vendingdisplay()
{	
std:cout << std::setprecision(2) << std::fixed; // Precision

		// Displaying Options for Vending Screen
		cout << "\t\t\t| Vending Machine |" << endl; // Soda Machine Title
		cout << "\t\t\t|_________________|" << endl << endl;
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(1) AMP" << setw(9) << "|" << "(4) Mountain Dew" << setw(5) << "|" << "(7) Coca Cola" << setw(5) << "|" << "(10) Dasani" << endl;
		cout << right << "" << setw(9) << "$1.11" << setw(7) << "|" << setw(4) << "" << "$2.14" << setw(12) << "|" << setw(4) << ""  << "$3.17" << setw(9) << "|" << setw(5) << ""  << "$4.14" << endl;
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(2) Monster" << setw(5) << "|" << "(5) Pepsi Cola" << setw(7) << "|"  <<"(8) Fanta" << setw(9) << "|"  << "(11) Fiji"   << endl;
		cout << right << "" << setw(9) << "$1.22" <<  setw(7) << "|" << setw(4) << ""  << "$2.25" << setw(12) << "|" << setw(4) << "" << "$3.28" << setw(9) << "|" << setw(5) << ""  << "$4.24" << endl;
		cout << "_______________________________________________________________________" << endl;
		cout << setw(3) << "(3) Nos" << setw(9) << "|" << "(6) Sprite" << setw(11) << "|" << "(9) Mr. Pibb" << setw(6) << "|" << "(12) Nestle"  << endl;
		cout << right << "" << setw(9) << "$1.33" << setw(7) << "|" << setw(4) << ""  << "$2.36" << setw(12) << "|" << setw(4) << ""  << "$3.39" << setw(9) << "|" << setw(5) << ""  << "$4.36" << endl;

		cout << "_______________________________________________________________________\n" << endl;

		cout << "\t\t\t" << setw(2) << "" << "___________________" << endl;
		cout << "\t\t\t" << setw(1) << "" << "| (13) Exit Program |" << endl; // Exits Program
		cout << "\t\t\t" << setw(1) << "" << "|___________________|" << endl;
		std::cout << std::string( 6, '\n' );

		cout << setw(1)<< "" << setw(20) << "___________________" << "" << setw(17)<< "" << setw(7) << "_______________________________" << endl;
		cout << setw(1)<< "" << setw(1) << "|" << " Aleksandar Kljaic" << setw(2) << "|" << setw(15) << "" << setw(7) << "| http://www.github.com/Hexers  |" << endl; // Exits Program
		cout << setw(1)<< "" << setw(20) << "|___________________|" << "" << setw(15)<< "" << setw(7) << "|_______________________________|" << endl;
		cout << endl;
}

void vendinginput()
{
	// Prompting user to enter a choice according to Vending Screen
	cout << "Enter your choice: " << endl; // User input 1 - 13
	cin >> vendingChoice; // User input 1 - 13
}

void vendingerror()
{
	// Error Message for selection anything out of the 1 - 13 range
	system("CLS"); // Clears Screen
	cout << "Invalid Choice! Please try again." << endl;
	system("PAUSE"); // Pauses Screen
	system("CLS"); // Clears Screen
}

int vendingoutput()
{	
			// Variables
			double myWallet = 0.0; // Variable for inserting money
			double myChange = 0.0; // Variable for change back

			system("CLS");
			cout << "You selected " << beverageName << " for $ " << beveragePrice << endl;
			cout << "Please insert payment now." << endl << endl;
			cout << "Insert Bills or Coins: "<< endl;
				cin >> myWallet;
				system("CLS");
					if(myWallet <= 20.00)
					{
						// Calculations
						myChange = myWallet - beveragePrice;
						// If the user lacks enough money, the vending machine will throw an error
						if(myChange < 0)
						{
							cout << endl;
							system("CLS");
							cout << "You do not have enough funds to purchase '" << beverageName << "' for $" << beveragePrice << endl;
							system("PAUSE");
							system("CLS");
							return(myWallet);
						}
						// Outputs
						cout << "You inserted $" << myWallet << endl;
						cout << "Your change is $" << myChange << endl << endl;
						cout << "Your selected beverage '" << beverageName << "' is being dispensed. Enjoy!" << endl;
						vendingend(); // Calls Function
					}
					else
					{
						system("CLS"); // Clears Screen
						cout << "This machine only accepts up to $20.00" << endl; // Throws the user an error, no more than $20 to be inserted!
						system("PAUSE"); // Pauses Screen
						system("CLS"); // Clears Screen
					}
					return(myChange);
}

void vendingend()
{
	system("PAUSE");
	system("CLS");
}

void vendingexit()
{
	system("CLS");
	cout << "Program is exiting." << endl;
}

int main ()
{
	SetConsoleTitle( TEXT( "Vending Machine - Aleksandar Kljaic")); // Quite honestly, I just wanted to see how it worked.

	do // do-while loop starts here
	{
		vendingdisplay(); // Calls Display Function #1
		vendinginput(); // Calls User Input
		if(vendingChoice == 1) // Choosing Option #1
		{
				beverageName = "AMP";
				beveragePrice = 1.11;
				vendingoutput();
		}
		else if(vendingChoice == 2) // Choosing Option #2
		{
				beverageName = "Monster";
				beveragePrice = 1.22;
				vendingoutput();
		}
		else if(vendingChoice == 3) // Choosing Option #3
		{
				beverageName = "Nos";
				beveragePrice = 1.33;
				vendingoutput();
		}
		else if(vendingChoice == 4) // Choosing Option #4
		{
				beverageName = "Mountain Dew";
				beveragePrice = 2.14;
				vendingoutput();
		}
		else if(vendingChoice == 5) // Choosing Option #5
		{
				beverageName = "Pepsi Cola";
				beveragePrice = 2.25;
				vendingoutput();
		}
		else if(vendingChoice == 6) // Choosing Option #6
		{
				beverageName = "Sprite";
				beveragePrice = 2.36;
				vendingoutput();
		}
		else if(vendingChoice == 7) // Choosing Option #7
		{
				beverageName = "Coca Cola";
				beveragePrice = 3.17;
				vendingoutput();
		}
		else if(vendingChoice == 8) // Choosing Option #8
		{
				beverageName = "Fanta";
				beveragePrice = 3.28;
				vendingoutput();
		}
		else if(vendingChoice == 9) // Choosing Option #9
		{
				beverageName = "Mr. Pibb";
				beveragePrice = 3.39;
				vendingoutput();
		}
		else if(vendingChoice == 10) // Choosing Option #10
		{
				beverageName = "Dasani";
				beveragePrice = 4.14;
				vendingoutput();
		}
		else if(vendingChoice == 11) // Choosing Option #11
		{
				beverageName = "Fiji";
				beveragePrice = 4.24;
				vendingoutput();
		}
		else if(vendingChoice == 12) // Choosing Option #12
		{
				beverageName = "Nestle";
				beveragePrice = 4.36;
				vendingoutput();
		}
		else if(vendingChoice == 13) // Choosing Option #13
		{
			vendingexit(); // Calls Function to exit
			return 0;
		}
		else
		{
			vendingerror(); // Calls function to throw an error
			return 0;
		}
	}
	while(vendingChoice != 13); 
	return 0;
}