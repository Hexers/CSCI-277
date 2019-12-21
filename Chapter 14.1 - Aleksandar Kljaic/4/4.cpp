#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Counting the number of vowels";
	int i, numChars;

	int countA = 0, countE = 0, countI = 0, countO = 0, countU =0;

	cout << "The string is: " << str << endl;

	numChars = int(str.length());
	for (i = 0; i < numChars; i++)
	{
		switch(str.at(i))
		{
		case 'a':
			countA++;
			break;
		case 'e':
			countE++;
			break;
		case 'i':
			countI++;
			break;
		case 'o':
			countO++;
			break;
		case 'u':
			countU++;
			break;
		}
	}
	
	cout << "The String has number of A vowel is: " << countA << endl;
	cout << "The String has number of E vowel is: " << countE << endl;
	cout << "The String has number of I vowel is: " << countI << endl;
	cout << "The String has number of O vowel is: " << countO << endl;
	cout << "The String has number of U vowel is: " << countU << endl;

	cin.get();
	return 0;
}
