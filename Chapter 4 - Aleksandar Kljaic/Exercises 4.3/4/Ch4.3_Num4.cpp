/*
*
* Chapter 4.3 - Number 4
* Aleksandar Kljaic
*
*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int choice;
	const int FIVE_YEARS = 5; // 0.040
	const int FOUR_YEARS = 4; // 0.035
	const int THREE_YEARS = 3; // 0.030
	const int TWO_YEARS = 2; // 0.025
	const int ONE_YEARS = 1; // 0.020
	const int ZERO_YEARS = 0; // 0.015

	cout << "How many years has it been since the deposit?" << endl;
	cin >> choice;

	if (choice >= FIVE_YEARS)
		cout << "Your interest rate is 0.040!" << endl;
	else if (choice < FIVE_YEARS && choice >= FOUR_YEARS)
		cout << "Your interest rate is 0.035!" << endl;
	else if (choice < FOUR_YEARS && choice >= THREE_YEARS)
		cout << "Your interest rate is 0.030!" << endl;
	else if (choice < THREE_YEARS && choice >= TWO_YEARS)
		cout << "Your interest rate is 0.025!" << endl;
	else if (choice < TWO_YEARS && choice >= ONE_YEARS)
		cout << "Your interest rate is 0.020!" << endl;
	else if (choice < ONE_YEARS)
		cout << "Your interest rate is 0.015!" << endl;
	else
		cout << endl;

	cin.get();
	cin.get();

	return 0;
}