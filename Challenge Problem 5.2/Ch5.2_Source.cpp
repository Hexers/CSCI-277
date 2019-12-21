/*
*
* Challenge Problem 5.2- Gas Station Pump
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
* Gas Prices Used: http://www.illinoisgasprices.com/
*
* Output: http://i.imgur.com/3YcyZmI.png
* 
* _______________________________________________________________________________
* 
*                         |  Petrol Station  |
*                         |__________________|
* 
* _______________________________________________________________________
* (1) Octane 87        |(2) Octane 89    |(3) Octane 91    |(4) Diesel
*     $2.02            |    $2.32        |    $2.77        |    $2.53
* _______________________________________________________________________
* 
*           ___________________             ___________________
*          |    (5) Override   |           | (6) Exit Program  |
*          |___________________|           |___________________|
* 
* 
*   ___________________                 _______________________________
*  | Aleksandar Kljaic |               | http://www.github.com/Hexers  |
*  |___________________|               |_______________________________|
* 
* Enter your choice:
* _
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
double petrolPrice = 0.0;
int petrolChoice;
string petrolName;
string username;
string password;
int loginAttempt = 0;

// Function prototypes
void petroldisplay();
void petrolinput();
void petrolerror();
int petroloutput();
void petrolend();
void petroldispense();
void userauthentication();

// Functions start here
void petroldisplay()
{	
std:cout << std::setprecision(2) << std::fixed; // Precision

	// Displaying Options for petrol Screen
	cout << "\t\t\t|  Petrol Station  |" << endl; // Soda Machine Title
	cout << "\t\t\t|__________________|" << endl << endl;
	cout << "_______________________________________________________________________" << endl;
	cout << setw(3) << "(1) Octane 87" << setw(9) << "|" << "(2) Octane 89" << setw(5) << "|" << "(3) Octane 91" << setw(5) << "|" << "(4) Diesel" << endl;
	cout << right << "" << setw(9) << "$2.02" << setw(13) << "|" << setw(4) << "" << "$2.32" << setw(9) << "|" << setw(4) << ""  << "$2.77" << setw(9) << "|" << setw(4) << ""  << "$2.53" << endl;
	cout << "_______________________________________________________________________\n" << endl;

	cout << "\t" << setw(2) << "" << "___________________" << "\t\t" << setw(2) << "" << "___________________" << endl;
	cout << "\t" << setw(1) << "" << "|    (5) Override   |" << "\t\t" << setw(1) << "" << "| (6) Exit Program  |" << endl; // Exits Program
	cout << "\t" << setw(1) << "" << "|___________________|" << "\t\t" << setw(1) << "" << "|___________________|" << endl;
	std::cout << std::string( 2, '\n' );

	cout << setw(1)<< "" << setw(20) << "___________________" << "" << setw(17)<< "" << setw(7) << "_______________________________" << endl;
	cout << setw(1)<< "" << setw(1) << "|" << " Aleksandar Kljaic" << setw(2) << "|" << setw(15) << "" << setw(7) << "| http://www.github.com/Hexers  |" << endl; // Exits Program
	cout << setw(1)<< "" << setw(20) << "|___________________|" << "" << setw(15)<< "" << setw(7) << "|_______________________________|" << endl;
	cout << endl;
}

void petrolinput()
{
	// Prompting user to enter a choice according to petrol Screen
	cout << "Enter your choice: " << endl; // User input 1 - 13
	cin >> petrolChoice; // User input 1 - 13
}

void petrolerror()
{
	// Error Message for selection anything out of the 1 - 13 range
	system("CLS"); // Clears Screen
	cout << "Invalid Choice! Please try again." << endl;
	system("PAUSE"); // Pauses Screen
	system("CLS"); // Clears Screen
}

int userauth()
{
	// This code is repurposed from Challenge Problem 4.2 - Aleksandar Kljaic
	// https://github.com/Hexers/CIS-276-Fall2016/tree/master/Challenge%20Problem%204.2
	system("CLS"); // Clears all above
	while (loginAttempt < 3)
	{
		cout << "Who would you like to log in as?" << endl;
		cout << "Hint (username/password): " << "admin/root & admin2/root2" << endl << endl; //The username/password combo to use.

		cout << "Username: " << endl; // Requests user input for a username
		cin >> username; // Requests user input for a username
		system("CLS"); // Clears Username as a Security Measure
		cout << "Password: " << endl; // Requests user input for a password
		cin >> password; // Requests user input for a password
		system("CLS"); // Clears Password as a Security Measure
		
		if (username == "admin" && password == "root")
		{
			system("CLS"); // Clears all above
			cout << "Welcome Administrator #1! Pump has been disabled!" << endl << endl;
			system("PAUSE");
			system("CLS");
			return 0;
		}
		else if(username == "admin2" && password == "root2")
		{
			system("CLS"); // Clears all above
			cout << "Welcome Administrator #2! Pump has been disabled!" << endl << endl;
			system("PAUSE");
			system("CLS");
			return 0;
		}
		else
		{
			system("CLS");
			cout << "Incorrect Login Information. Please try again." << endl << endl;
			loginAttempt++;
		}
	}
	if (loginAttempt == 3)
	{
		system("CLS"); // Clears all above
		cout << "Too many incorrect login attempts!" << endl << endl;
		system("PAUSE");
		return 0;
	}
}

void petroldispense()
{
	/* This snippet of code was repurposed from http://www.cplusplus.com/
	*  I liked this snippet of code so much that I actually wanted to incorportate it into my own program.
	*  The sleep function seemed like the perfect thing to use for a gas station pump.
	*/
	cout << "---------------------'STANDBY'---------------------" << endl;
	Sleep(3000);
	cout << "----------------------'READY'----------------------" << endl;
	Sleep(3000);
	cout << "------------------------'3'------------------------" << endl;
	Sleep(1000);
	cout << "------------------------'2'------------------------" << endl;
	Sleep(1000);
	cout << "------------------------'1'------------------------" << endl;
	Sleep(1000);
	cout << "-------------'REFILLING / PLEASE WAIT'-------------" << endl;
	Sleep(5000);
	cout << "-----------------'REFILL COMPLETE'-----------------" << endl;
	Sleep(500);
}

int petroloutput()
{	
	// Variables
	double myWallet = 0.0; // Variable for inserting money
	double myChange = 0.0; // Variable for change back
	double petrolAmount = 0.0;
	double petrolPriceTotal = 0.0;

	system("CLS");
	cout << "You selected " << petrolName << " for $ " << petrolPrice << " a gallon." << endl;
	cout << "Please enter amount of petrol: " << endl; // Need to calculate this later....
		cin >> petrolAmount;
		petrolPriceTotal = petrolAmount * petrolPrice;
	cout << "You have selected a total of '" << petrolAmount << "' gallons of petrol for $" << petrolPriceTotal << endl;
	cout << "Please insert payment now." << endl << endl;
	cout << "Insert Bills or Coins: "<< endl;
		cin >> myWallet;
		system("CLS");
		if(myWallet <= 100.00)
		{
			// Calculations
			myChange = myWallet - petrolPriceTotal;
			// If the user lacks enough money, the petrol machine will throw an error
			if(myChange < 0)
			{
				cout << endl;
				system("CLS");
				cout << "You do not have enough funds to purchase '" << petrolName << "' for $" << petrolPriceTotal << endl;
				system("PAUSE");
				system("CLS");
				return(myWallet);
			}
				// Outputs
				cout << "You inserted $" << myWallet << endl;
				cout << "Your change is $" << myChange << endl << endl;
				std::cout << std::string( 2, '\n' );
				cout << "Your selected petrol '" << petrolName << "' is being dispensed." << endl;
				petroldispense(); // Calls Function
				petrolend(); // Calls Function
		}
			else
			{
				system("CLS"); // Clears Screen
				cout << "This machine only accepts up to $100.00" << endl; // Throws the user an error, no more than $20 to be inserted!
				system("PAUSE"); // Pauses Screen
				system("CLS"); // Clears Screen
			}
			return(myChange);
}

void petrolend()
{
	system("PAUSE");
	system("CLS");
}

void petrolexit()
{
	system("CLS");
	cout << "Program is exiting." << endl;
}

int main ()
{
	SetConsoleTitle( TEXT( "Gas Station Pump - Aleksandar Kljaic"));

	do // do-while loop starts here
	{
		petroldisplay(); // Calls Display Function #1
		petrolinput(); // Calls User Input
		if(petrolChoice == 1) // Choosing Option #1 - REGULAR
		{
				petrolName = "Octane 87";
				petrolPrice = 2.02;
				petroloutput();
		}
		else if(petrolChoice == 2) // Choosing Option #2 - MIDGRADE
		{
				petrolName = "Octane 89";
				petrolPrice = 2.32;
				petroloutput();
		}
		else if(petrolChoice == 3) // Choosing Option #3 - PREMIUM 
		{
				petrolName = "Octane 91";
				petrolPrice = 2.77;
				petroloutput();
		}
		else if(petrolChoice == 4) // Choosing Option #4 - DIESEL
		{
				petrolName = "Diesel";
				petrolPrice = 2.53;
				petroloutput();
		}
		else if(petrolChoice == 5) // Choosing Option #5 - USER AUTHENTICATION
		{
			userauth();
			return 0;
		}
		else if(petrolChoice == 6) // Choosing Option #6 - EXITING PROGRAM
		{
			petrolexit(); // Calls Function to exit
			return 0;
		}
		else
		{
			petrolerror(); // Calls function to throw an error
			return 0;
		}
	}
	while(petrolChoice != 6); 
	return 0;
}