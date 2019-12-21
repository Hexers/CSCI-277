/*
Aleksandar Kljaic
Bryan Kruschke
September 29, 2016
Challenge Problem 3.2
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
	char amountMoney[256];
	char clientName[256];

	cout << "How much are you writing the check for?" << endl << endl;
	cin.getline (amountMoney,256);
	cout << "What is the clients name?" << endl << endl;
	cin.getline (clientName,256);

	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">" << right << setw(85) << amountMoney << right << setw(4) <<  ">" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">  Pay to the Order of:" << right << setw(60) << clientName << right << setw(7) << ">" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	cin.get();
	cin.get();

	return 0;

}
