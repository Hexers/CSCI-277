/*  
* 10. Page 92
* Aleksandar Kljaic
* September 27, 2016
*
* **Table for #10 Starts here**
*
* Complete the table below:
*
* Unit Type: Inches
*
* Length (in.) - Width (in.) - Area (in. sq.)
*
* Length: 1.62 - Width: 6.23 - Area: 10.0926
* 
* Length: 2.86 - Width: 7.52 - Area: 21.5072
* 
* Length: 4.26 - Width: 8.95 - Area: 38.127
* 
* Length: 8.52 - Width: 10.86 - Area: 92.5272
*
* Length: 12.29 - Width: 15.35 - Area: 188.651
*
* **Table for #10 End here**
*
* Misc. Notes:
* -	I have altered the Program from 3.1 to accept user input.
*
*
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// Variables initialized
	double rectangleLength = 0;
	double rectangleWidth = 0;
	double rectangleArea = 0;
	
	// Requesting user input for the length
	cout << "Enter the length of the rectangle you wish to calculate: ";

	// User input for length
	cin >> rectangleLength;

	// Requesting user input for the width
	cout << "Enter the width of the rectangle you wish to calculate: ";

	// User input for width
	cin >> rectangleWidth;

	// Calculating the area
	rectangleArea = rectangleLength * rectangleWidth;

	// Output of the length, width, and then the area
	cout << "The length of the rectangle is: " << rectangleLength << endl;
	cout << "The width of the rectangle is: " << rectangleWidth << endl;
	cout << "The area of the rectangle is: " << rectangleArea << endl;

	// Holds open the console window as Visual Studio is retarded.
	cin.get();
	cin.get();
}
