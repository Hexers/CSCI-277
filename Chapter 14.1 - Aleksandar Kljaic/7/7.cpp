#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    char c;
    size_t contain;
    int count = 0;
    cout << "Enter a string : ";
    getline(cin, s);
    cout <<"Enter a char : ";
    cin >> c;
    for(int i = 0; i < s.length(); i++)
    {
        while( 1 )
		{
			contain = s.find(c, i);
			if (contain != string::npos )
			{
				count++;
				i = contain + 1;
			}
				else
				{
					break;
				}
		}

	}

    cout << count << endl;

	cin.get();
	cin.get();

    return 0;

}