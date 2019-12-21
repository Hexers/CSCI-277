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
		cout << endl << "Choose Characters\n" << endl << endl;
		cout << endl << "Playing:\n" << endl << endl;
		cout << "(1) Corin Stoneseeker\n" << endl;
		cout << endl << "Not Playing:\n" << endl << endl;
		cout << "(2) Laran Darkwatch" << endl;
		cout << "(3) M.J. Turner" << endl;
		cout << "(4) Valentine Stewart" << endl;
		cout << "(5) Jean G. Clerc\n" << endl;
		cout << endl << "Choose a character to move from the\n playing to the not playing list\n or vice-versa, or:\n\n\ " << endl << endl;
		cout << "(6) Finished " << "?) Help \n" << endl;
		cout << endl << "Type any prompt, or use cursor keys.\n" << endl << endl;
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
			} while (choice != 1);
			if (choice == 1)
			{
				cout << "(1) Corin Stoneseeker" << endl;
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
			} while (choice != 2);
			if (choice == 2)
			{
				cout << "(2) Laran Darkwatch" << endl;
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
			} while (choice != 3);
			if (choice == 3)
			{
				cout << "(3) M.J. Turner" << endl;
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
			} while (choice != 4);
			if (choice == 4)
			{
				cout << "(4) Valentine Stewart" << endl;
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
			} while (choice != 5);
			if (choice == 5)
			{
				cout << "(5) Jean G. Clerc" << endl;
			}
		case 6:
			cout << "Star Saga is now exiting..." << endl << endl;
			break;
		}
		return choice;
	}
