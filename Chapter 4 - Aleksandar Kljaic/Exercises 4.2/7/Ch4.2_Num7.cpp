/*
*
* Chapter 4.2 - Number 7
* Aleksandar Kljaic
*
*/
#include <iostream>

using namespace std;

int main()
{
    int num;

	cout << "Please enter a number to check if whether it's even or odd!" << endl;
    cin >> num;

	if ( num % 2 == 0 )
		cout << num << " is an even number!" << endl;
	else if ( num % 2 == 1 )
		cout << num << " is an odd number!" << endl;
	else
		cout << endl;

	cin.get();
	cin.get();
    return 0;
}