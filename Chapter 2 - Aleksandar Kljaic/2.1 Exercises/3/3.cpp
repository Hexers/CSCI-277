#include <iostream>
using namespace std;

int main()

{
	cout << "\n Data Type           Bytes";
	cout << "\n ---------           -----";
	cout << "\n int................." << sizeof(int);
	cout << "\n char................" << sizeof(char);
	cout << "\n bool................" << sizeof(bool);
	cout << "\n short int..........." << sizeof(short int);
	cout << "\n long int............" << sizeof(long int);
	cout << "\n char unsigned......." << sizeof(unsigned char);
	cout << "\n short int unsigned.." << sizeof(unsigned short int);
	cout << "\n int unsigned........" << sizeof(unsigned int);
	cout << "\n long int unsigned..." << sizeof(unsigned long int);
	cout << '\n';


	cin.get();
	return 0;
}
