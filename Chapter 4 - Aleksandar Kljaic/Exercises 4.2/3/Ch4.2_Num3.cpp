/*
* 
* Chapter 4 - #3
* Aleksandar Kljaic
* 
* 
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double num1;
	double num2;

	cout << "Please input Number One: " << endl;
	cin >> num1;

	cout << "Please input Number Two: " << endl;
	cin >> num2;

	if (num1 > num2)
		cout << "Number 1 is greater than Number 2! " << "Number 1 is: " << num1 << endl;
	else if (num1 < num2)
		cout << "Number 1 is less than Number 2! " << "Number 2 is: " << num2 << endl;
	else 
		cout << "Number 1 and Number 2 are equal to each other!" << endl;
	
	cin.get();
	cin.get();

	return 0;
}
