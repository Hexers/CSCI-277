/*
*
* Chapter 4.3 - Number 10
* Aleksandar Kljaic
*
*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	// Variables Initialized
	double year;
	double weight; 

	// Requesting User Input for Vehicle Year
	cout << "Please enter the year of your vehicle: "; 
	cin >> year; 
	// Requesting User Input for Vehicle Weight
	cout << "Please enter the weight of your vehicle: "; 
	cin >> weight; 

	if ( year <= 1990 && weight < 2700 ) 
	cout << "Your weight class is 1 and your registration fee is $26.50!" << endl; 

	else if ( year <= 1990 && weight > 2700 && weight < 3800)
	cout << "Your weight class is 2 and your registration fee is $35.50!" << endl; 

	else if ( year <= 1990 && weight >= 3800)
	cout << "Your weight class is 3 and your registration fee is $56.50!"<< endl; 

	else if ( year <= 1990 && year < 1999 && weight > 2700)
	cout << "Your weight class is 4 and your registration fee is $35.00!" << endl; 

	else if ( year <= 1990 && year < 1999 && weight > 2700 && weight <= 3800)
	cout << "Your weight class is 5 and your registration fee is $45.50!" << endl; 

	else if ( year <= 1990 && year < 1999 && weight > 3000)
	cout << "Your weight class is 6 and your registration fee is $62.50!" << endl; 

	else if ( year >= 2000 && weight < 3500)
	cout << "your weight class is 7 and your registration fee is $49.50!" << endl; 

	else if ( year >= 2000 && weight > 3500)
	cout << "Your weight class is 8 and your registration fee is $62.50!" << endl; 

	else 
	cout << endl; 

	cin.get();
	cin.get();

	return 0; 
}