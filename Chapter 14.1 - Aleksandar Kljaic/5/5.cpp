#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "Please enter the string" << endl;

	getline(cin,str);

	int i, numChars;

	int vowelCount = 0;

	cout << "The String: " << str << endl;

	numChars = int(str.length());

	for (i = 0; i < numChars; i++)
	{
		switch(str.at(i))
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':

		vowelCount++;
		}
	}

	cout << "has " << vowelCount << " vowels." << endl;

	cin.get();
	
	return 0;
}
