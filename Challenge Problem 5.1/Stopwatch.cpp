/*
*
* Challenge Problem 5.1- Stopwatch
* 
* CIS-276-E010
* 
* Project By:
*	- Aleksandar Kljaic - http://github.com/Hexers/
* 
* _______________________________________________________________________________
* 
*
* Output: http://i.imgur.com/d1qPZrt.png
*
*	*****First Display Window*****
* _______________________________________________________________________________
* Press any key to start the timer: _
* _______________________________________________________________________________
*
*	*****Second Display Window*****
* _______________________________________________________________________________
* h:s:m:ms
* _______________________________________________________________________________
* 
*/

#include <iostream> /* I/O Library */
#include <Windows.h> /* Windows API */
#include <conio.h> /* Only used for the get character input */

using namespace std;

int main()
{
	SetConsoleTitle( TEXT( "Stopwatch - Aleksandar Kljaic")); /* Setting the console title */

	/* Variables */
	int milliseconds = 0; /* Initalizing Milliseconds */
	int seconds = 0;	/* Initalizing Seconds */
	int minutes = 0;	/* Initalizing Minutes */
	int hours = 0;		/* Initalizing Hours */

	cout << "Press any key to start the timer: "; /* Requesting the user to press any key to start the timer */
	char start = _getch();

		for(;;) /* For Loop Starts */
		{
			system("CLS"); /* Clears Screen - Could have used clrscr since conio.h is called but whatever */
				if(milliseconds == 10) /* If milliseconds are 10 increment seconds and reset milliseconds to zero */
				{
				++seconds;
				milliseconds = 0;
				}
				if(seconds == 60) /* If seconds are 60 increment minutes and reset seconds to zero */
				{
					++minutes;
					seconds = 0;
				}
				if(minutes == 60) /* If minutes are 60 increment hours and reset minutes to zero */
				{
					++hours;
					minutes = 0;
				}
			cout << hours << ":" << minutes << ":" << seconds << ":" << milliseconds << endl; /* Outputs the following: h:m:s:ms */
			++milliseconds; /* Increment milliseconds once all other if statements are met */
			Sleep(100); /* Sleeps for 100 milliseconds */
		} /* For Loop Ends */
	return 0;
}