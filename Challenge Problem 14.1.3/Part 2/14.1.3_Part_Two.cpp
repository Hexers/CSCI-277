#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
void showMenu();
int mainMenuSelection(int);

int main ()
{
	int choice;
	cout << fixed << showpoint << setprecision(2);
	do
	{
		showMenu();
		cin >> choice;
		while (choice < 1 || choice > 2)
		{
			cout << "Please choose (1) or (2): ";
			cin >> choice;
		}
		mainMenuSelection(choice);
	} while (choice != 2);
	return 0;
}
	
void showMenu()
	{
		cout << "Plot Editor" << ".............." << "Phases Left: 1 *\n" << endl;
		cout << "START: " << " Parked on <114-G-Nine Worlds>." << endl;
		cout << "T" << "(  1 )" << "Take off." << endl;
		cout << "B" << "(  1 )" << "<113-B>." << endl;
		cout << "V" << "(  1 )" << "<151-V>." << endl;
		cout << "P" << "(  1 )" << "<150-O>." << endl;
		cout << "Y" << "(  1 )" << "<152-Y>." << endl;
		cout << "V" << "(  1 )" << "<153-V-Bugeye>.\n" << endl;
		cout << "Options available:" << endl;
		cout << "(G) Green " << "(Y) Yellow " << "(O) Orange " << endl;
		cout << "(A) Action " << "(L) Land \n" << endl;
		cout << "Select one of the above options, or: " << endl;
		cout << "(F) Finished " << "(ESC) Escape " << endl;
		cout << "(S) Status " << "(?) Help " << "(X) Delete \n" << endl;
		cout << "Type any prompt, or use cursor keys. " << endl;
	}
	
int mainMenuSelection(int choice)
	{
		int chooseCharacter;
		int chooseSelection;
		switch (choice)
		{
		case 1:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'T');
			if (choice == 'T')
			{
				cout << "(T) Take off." << endl;
			}
		case 2:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'B');
			if (choice == 'B')
			{
				cout << "(B) - <113-B>." << endl;
			}
		case 3:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'V');
			if (choice == 'V')
			{
				cout << "(V) -<151-V>" << endl;
			}
		case 4:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'P');
			if (choice == 'P')
			{
				cout << "(P) - <150-O>" << endl;
			}
		case 5:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'Y');
			if (choice == 'Y')
			{
				cout << "(Y) - <152-Y>" << endl;
			}
		case 6:
			do
			{
				cin >> chooseCharacter; 
				while (chooseCharacter < 1 || chooseCharacter > 6)
				{
					cout << "Please choose a character: ";
					cin >> chooseCharacter; 
				}
			} while (choice != 'V');
			if (choice == 'V')
			{
				cout << "(V) - <153-V-Bugeye>" << endl;
			}
		case 7:
			cout << "Star Saga is now exiting..." << endl << endl;
			break;
		}
		return choice;
	}
