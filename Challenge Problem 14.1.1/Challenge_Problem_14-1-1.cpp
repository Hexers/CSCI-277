/*
Aleksandar Kljaic
September 19, 2016
Challenge Problem 14.1.11
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main ()
{

	double amountMoney;
	string clientName = "";


	cout << "How much are you writing the check for?" << endl;
	cin >> amountMoney;
	cout << "What is the clients name?\n" << endl;
	cin >> clientName;


	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">                                                                   " << "$" << amountMoney << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">          Pay to the Order of                                              " << clientName << endl;
	cout << ">                                                                                        >" << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

	cin.get();
	cin.get();
	return 0;
}
