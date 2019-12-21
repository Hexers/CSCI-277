/*  
* 10. Page 92
* Aleksandar Kljaic
* September 27, 2016
*
* Misc. Notes:
* -	I have altered the program to accept user input
*   as it's quite more flexible
* - I have also kept the slope calculation and output
*	within this program as-well.
* - I have nested the program in a loop so it's much
*   more flexible in regards to doing more equations.
* - It requests if the user wants to do another calculation or exit.
* 
* **Table from page 105 Starts here**
*
* Point 1	Point 2		Midpoint
* -------	-------		-------------
* (4,6)		(16,18)		(10.00,12.00)
* (22,3)	(8,12)		(15.00,7.50)
* (-10,8)	(14,4)		(2.00,6.00)
* (-12,2)	(14,3.1)	(1.00,2.55)
* (3.1,-6)	(20,16)		(11.55,5.00)
* (3.1,-6)	(-16,-18)	(-6.45,-12.00)
*
* **Table from page 105 Ends here**
*
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	int returnto;
	do 
	{

		// Variables initialized
		double slope = 0;
		double coordinateX1 = 0;
		double coordinateY1 = 0;
		double coordinateX2 = 0;
		double coordinateY2 = 0;
		double topEquation;
		double bottomEquation;

		double midpointValueX;
		double midpointValueY;

		// Requesting user input for (X1,Y1) and (X2,Y2)

		// Requests user input for X1
		cout << "What is the X1 value? " << endl;
		// User input for X1
		cin >> coordinateX1;
		// Requests user input for Y1
		cout << "What is the Y1 value? " << endl;
		// User input for Y1
		cin >> coordinateY1;
		// Requests user input for X2
		cout << "What is the X2 value? " << endl;
		// User input for X2	
		cin >> coordinateX2;
		// Requests user input for Y2
		cout << "What is the Y2 value? " << endl;
		// User inpuit for Y2
		cin >> coordinateY2;
		// Adds a blank line for user experience
		cout << endl;

		// Calculations for slope

		// Y2 - Y1
		topEquation = coordinateY2 - coordinateY1;
		// X2 - X1
		bottomEquation = coordinateX2 - coordinateX1;
		// Slope is topEquation (Y2-Y1) divided by bottomEquation (X2-X1)
		slope = topEquation / bottomEquation;
		// Spacing for 2 decimal places after output of slope
		std::cout << std::setprecision(2) << std::fixed;
		// Output the value of slope with a spacing of 3 to the left of the decimal.
		cout << "The value of the slope is: " << setw(3) << slope << endl << endl; // Makes a blank line after output of slope.
		
		// Calculations for midpoints

		// Midpoint of X is ((X2+X1)/2)
		midpointValueX = ((coordinateX2 + coordinateX1 ) / 2);
		// Midpoint of Y is ((Y2+Y1)/2)
		midpointValueY = ((coordinateY2 + coordinateY1 ) / 2);
		// Spacing for 2 decimal places after output of midpointValueX and midpointValueY
		std:cout << std::setprecision(2) << std::fixed;
		// Output for the midpoint of the x coordinate with a spacing of 3 before the midpointValueX
		cout << "The x coordinate of the midpoint is: " << setw(3) << midpointValueX << endl;
		// Output for the midpoint of the Y coordinate with a spacing of 3 before the midpointValueY and making a blank line with the second endl
		cout << "The y coordinate of the midpoint is: " << setw(3) << midpointValueY << endl << endl;
		// Requests the user to either Enter 1 to restart the program or Enter 2 to exit the program
		cout << "Enter 1 to restart the program, Enter 2 to exit the program: ";
		cin >> returnto;
		// Clears the console screen - WINDOWS ONLY
		system("cls");
	}
	// 1 refers to restarting the program --- Loops back to the start of the program
	while (returnto == 1);
	// 2 refers to exiting the program --- The loop exits
	if (returnto == 2);
	// Exits the program
	return 0;
}
