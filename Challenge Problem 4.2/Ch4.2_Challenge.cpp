/*
*
* Challenge Problem 4.2 - User Sign On
* CIS-276-E010
* 
* Project By:
*	- Aleksandar Kljaic - http://github.com/Hexers/
* 
* ______________________________________________________________________________________________________________________________________
* 
* We take it for granted that there is a simple, often times single sign on for us to authenticate to the services we need. 
* Here at RVC we are passed from system to system (Eagle, Online Services, etc) without having to leave the comfort of our
* chosen browsers. This was not always the case. Signing on to a remote server for a service requires more planning on behalf
* of the organization than we realize. It used to take pizazz and some display magic. 

* Your job is to emulate a sign in procedure. At this stage we do not have a file yet that contains those username and password 
* records, but we'll approximate that. You'll hard code a user name and password, and using selection and some string manipulation 
* you'll go through the sign in process with your user. Some things to consider are:
* 
* Let us know where we're signing in. Telnet and other dialup interactions return to you a black screen with little other than a 
* cursor. How is your user going to know that they are signing in at the right place? 
* 
* Your user may / will not have a clue as to how to use your system - use the space after your Company Heading to explain what they 
* are doing. Notice how precise the screen captions there are. You have to guide your user through the interaction until they are 
* familiar with the process.
* 
* If I try to authenticate as EWOULFE is that the same as ewoulfe or EWoulfe or EwOuLfE? Nope. What string manipulations have we seen 
* that you can use here? Not sure? They're in 14.2. Start experimenting.
* 
* Let's assume you can goof your sign in 2 times before you are booted out. You'll need a mechanism to keep track of those 
* failed sign in attempts. 
* 
* If you keep all of your previous outputs to screen present, your terminal window will get awfully crowded awfully fast. 
* You'll want to clear the screen in between interactions (like GMail does - go look to see how that works).
* There are two methods here to do so.
* 
* System Dependent:	http://mathbits.com/MathBits/CompSci/Introduction/clear.htm
* system("CLS");
* System Independent:	http://www.cplusplus.com/forum/beginner/3304/
* cout << string(50, '\n');
* 
* 
* ______________________________________________________________________________________________________________________________________
*
* 
*/


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <Windows.h>

using namespace std;

int main ()
{
	SetConsoleTitle( TEXT( "User Authentication - Aleksandar Kljaic")); // Quite honestly, I just wanted to see how it worked.
	
	string username;
	string password;
	int loginAttempt = 0;


	while (loginAttempt < 3)
	{
		cout << "Who would you like to log in as?" << endl;
		cout << "Hint (username/password): " << "admin/root & guest/password" << endl << endl; //The username/password combo to use.

		cout << "Username: " << endl; // Requests user input for a username
		cin >> username; // Requests user input for a username
		system("CLS"); // Clears Username as a Security Measure
		cout << "Password: " << endl; // Requests user input for a password
		cin >> password; // Requests user input for a password
		system("CLS"); // Clears Password as a Security Measure

		if (username == "admin" && password == "root")
		{
			system("CLS"); // Clears all above
			cout << "Welcome Administrator!" << endl << endl;
			system("PAUSE");
			system("CLS");
		}
		else if(username == "guest" && password == "password")
		{
			system("CLS"); // Clears all above
			cout << "Welcome Guest!" << endl << endl;
			system("PAUSE");
			system("CLS");
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
	}
}