/*
*
* Chapter 3 Challenge Problem - BadVW
* October 6, 2016
* Aleksandar Kljaic
*
* ________________________________________________________________________________
* 
* Model                                City  Highway  Combined  Adjusted  10% Loss
* -----                                ----  -------  --------  --------  --------
* 2016 Volkswagen Golf R               25.00  31.00    28.00     25.20      2.80
* 2016 Volkswagen Golf                 25.00  36.00    30.50     27.45      3.05
* 2016 Volkswagen Golf SportWagen      25.00  35.00    30.00     27.00      3.00
* 2015 Volkswagen Golf TDI SE          31.00  43.00    37.00     33.30      3.70
* 2016 Volkswagen Beetle Convertible   23.00  31.00    27.00     24.30      2.70
* 2016 Volkswagen Beetle Dune          24.00  31.00    27.50     24.75      2.75
* 2014 Volkswagen Beetle               29.00  31.00    34.00     30.60      3.40
* ________________________________________________________________________________
*
*/

#include <iostream>
#include <iomanip>	// setw(), setiosflags()
#include <string>

using namespace std;

int main ()
{
	// Variables Initialized - Please don't kill me. Too many variables. Whatever :/
	double adjustedFuelEconomy = 0;
	double adjustedDifference = 0;

	// Claimed Combined/Average
	double claimedAverage = 0;

	// Claimed City MPG
	double claimedCityOne = 25;		// 2016 Volkswagen Golf R
	double claimedCityTwo = 25;		// 2016 Volkswagen Golf
	double claimedCityThree = 25;	// 2016 Volkswagen Golf SportWagen
	double claimedCityFour = 31;	// 2015 Volkswagen Golf TDI SE
	double claimedCityFive = 23;	// 2016 Volkswagen Beetle Convertible
	double claimedCitySix = 24;		// 2016 Volkswagen Beetle Dune
	double claimedCitySeven = 29;	// 2014 Volkswagen Beetle

	// Claimed Highway MPG
	double claimedHighwayOne = 31;		// 2016 Volkswagen Golf R
	double claimedHighwayTwo = 36;		// 2016 Volkswagen Golf
	double claimedHighwayThree = 35;	// 2016 Volkswagen Golf SportWagen
	double claimedHighwayFour = 43;		// 2015 Volkswagen Golf TDI SE
	double claimedHighwayFive = 31;		// 2016 Volkswagen Beetle Convertible
	double claimedHighwaySix = 31;		// 2016 Volkswagen Beetle Dune
	double claimedHighwaySeven = 39;	// 2014 Volkswagen Beetle

	// Percentages
	double tenPercent = 0.10;		// 10%
	double nintyPercent = 0.90;		// 90%


	// Precision because Eric Woulfe wants the output to the nearest 10th
	std:cout << std::setprecision(2) << std::fixed;

	// Title Output Starts
	cout << left << setw(3) << " Model " << setw(30) << "" << " City " << " Highway " << " Combined " << " Adjusted " << " 10% Loss " << endl;
	cout << left << setw(3) << " ----- " << setw(30) << "" << " ---- " << " ------- " << " -------- " << " -------- " << " -------- " << endl;
	// Title Output Ends

	// Vehicle Number One (1) Starts
	// 2016 Volkswagen Golf R
	claimedAverage = ((claimedCityOne + claimedHighwayOne)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number One (1)
	cout << left << setw(3) << " 2016 Volkswagen Golf R " << setw(14) << "" << claimedCityOne << setw(2) << "" << claimedHighwayOne << setw(4) << "" << claimedAverage << setw(5) << "" << adjustedFuelEconomy << setw(6) << "" << adjustedDifference << endl;
	// Vehicle Number One (1) Ends

	// Vehicle Number Two (2) Starts
	// 2016 Volkswagen Golf
	claimedAverage = ((claimedCityTwo + claimedHighwayTwo)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number Two (2)
	cout << left << setw(3) << " 2016 Volkswagen Golf " << setw(16) << "" << claimedCityTwo << setw(2) << ""  << claimedHighwayTwo << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Two (2) Ends

	// Vehicle Number Three (3) Starts
	// 2016 Volkswagen Golf SportWagen
	claimedAverage = ((claimedCityThree + claimedHighwayThree)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number Three (3)
	cout << left << setw(3) << " 2016 Volkswagen Golf SportWagen " << setw(5) << "" << claimedCityThree << setw(2) << ""  << claimedHighwayThree << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Three (3) Ends

	// Vehicle Number Four (4) Starts
	// 2015 Volkswagen Golf TDI SE
	claimedAverage = ((claimedCityFour + claimedHighwayFour)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number Four (4)
	cout << left << setw(3) << " 2015 Volkswagen Golf TDI SE " << setw(9) << "" << claimedCityFour << setw(2) << ""  << claimedHighwayFour << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Four (4) Ends

	// Vehicle Number Five (5) Starts
	// 2016 Volkswagen Beetle Convertible
	claimedAverage = ((claimedCityFive + claimedHighwayFive)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number Five (5)
	cout << left << setw(3) << " 2016 Volkswagen Beetle Convertible " << setw(2) << "" << claimedCityFive << setw(2) << ""  << claimedHighwayFive << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Five (5) Ends

	// Vehicle Number Six (6) Starts
	// 2016 Volkswagen Beetle Dune
	claimedAverage = ((claimedCitySix + claimedHighwaySix)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage * tenPercent;
	// Output for Vehicle Number (6)
	cout << left << setw(3) << " 2016 Volkswagen Beetle Dune " << setw(9) << "" << claimedCitySix << setw(2) << ""  << claimedHighwaySix << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Six (6) Ends

	// Vehicle Number Seven (7) Starts
	// 2014 Volkswagen Beetle
	claimedAverage= ((claimedCitySeven + claimedHighwaySeven)/2);
	// 90% of MPG = Factory MPG times 0.90
	adjustedFuelEconomy = claimedAverage * nintyPercent;
	// 10% of MPG = Factory MPG times 0.10
	adjustedDifference = claimedAverage  * tenPercent;
	// Output for Vehicle Number Seven (7)
	cout << left << setw(3) << " 2014 Volkswagen Beetle " << setw(14) << "" << claimedCitySeven << setw(2) << ""  << claimedHighwaySix << setw(4) << ""  << claimedAverage << setw(5) << ""  << adjustedFuelEconomy << setw(6) << ""  << adjustedDifference << endl;
	// Vehicle Number Seven (7) Ends

	// Ending of Program Starts

	cin.get(); // Holding open Console Window
	cin.get(); // Holding open Console Window

	return 0;
	// End of Program Ends - Obviously... Duh!
}



