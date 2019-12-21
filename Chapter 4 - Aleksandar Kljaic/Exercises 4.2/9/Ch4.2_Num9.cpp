/*
* 
* Chapter 4.2 - Number 9
* Aleksandar Kljaic
* 
*/
#include <iostream>
using namespace std;

int main()
{    
	// Variables initialized
	int year;
	int leap;

	// Requesting user input for a year
	cout << "Enter a year: ";
	cin >> year ;

	//Calculation for a leap year
	leap = year % 4;     

	// is a leap year
	if (leap==0)

	{                         
		cout << year << " is a leap year!" << endl; 
	} 
	// is not a leap year
	 else            
	{                
		 cout << year << " is not a leap year!" << endl;
	}     

	cin.get();
	cin.get();
	return 0;
}