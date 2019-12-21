/*  
* 4. Page 123
* Aleksandar Kljaic
* September 27, 2016
*
* Misc. Notes:
* -	I have altered the program to accept user input
*   as it's quite more flexible
* - I have nested the program in a loop so it's much
*   more flexible in regards to doing more equations.
* - It requests if the user wants to do another calculation or exit.
* 
* **Table from page 123 Starts here**
*
*	Radius (in.)	Area (sq. in.)
*	------------	--------------
*	1.0					3.1416
*	1.5					7.0686
*	2.0					12.5664
*	2.5					19.6350
*	3.0					28.2744
*	3.5					38.4846
*
* **Table from page 123 Ends here**
*
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
//#include <cmath>
//#include <math.h>


using namespace std;

int main()
{
	int returnto;
	do 
	{

		// Variables initialized
		double areaCircle = 0;
		double radiusCircle = 0;
		double radiusSquared = 0;
		double pi = 3.1416;

		// Requesting user input for (X1,Y1) and (X2,Y2)

		// Requests user input for X1
		cout << "Enter the radius of a circle: " << endl;
		// User input for X1
		cin >> radiusCircle;
		// Adds a blank line for user experience
		cout << endl;
		// Calculations for Area of a Circle
		radiusSquared = radiusCircle * radiusCircle;
		areaCircle = pi * radiusSquared;

		// Spacing for 2 decimal places after output of slope
		std::cout << std::setprecision(4) << std::fixed;
		// Outputs "The area of the circle is: xx.xxxx square inches. Then a blank line.
		cout << "The area of the circle is: " << areaCircle << " square inches." << endl << endl;
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
