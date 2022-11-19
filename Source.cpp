//**************************************************************************//
//** Author: Sanjana Vijayakumar Nambiar                                  **//
//** Date Created: July 20, 2020                                          **//
//** Assignment 1: Water Pressure exerted on dam                          **//
//** ENGR-UH 1000 Computer Programming for Engineers, NYUAD               **//
//** Problem:                                                             **//
//** Computation of Force exerted on the dam at specific locations        **//
//** Given the Depth of the channel (D), Width of the channel base (b),   **//
//** Elevation of the water above channel bottom (d),                     **//
//** Distance from edge to bank of the channel (a)                        **//
//**************************************************************************//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define g 9.81
#define densityOfWater 1000
#define underline "\033[4m"
#define closeunderline "\033[0m"

int main()
{
	//Input variables
	int choice;
	double D;
	double b;
	double d;
	double a;

	//for calculating forces for a range of water elevation
	double d1;
	double d2;
	double stepsize;

	//Output variables
	double force;

	bool repeat = true;

	cout << underline << "THIS PROGRAM COMPUTES THE FORCE EXERTED ON A DAM AT SPECIFIC LOCATIONS" << closeunderline << endl << endl;

	// A sentinal loop for the main menu.
	while (repeat)
	{
		// present the menu and prompt the user for a character input.
		cout << "Please enter your selection for determining the force exerted" << endl;
		cout << "\tEnter 1 for determining the force on the dam" << endl;
		cout << "\tEnter 2 for determining the forces for a range of water elevations" << endl;
		cout << "\tEnter 3 for exiting the program" << endl;

		cin >> choice;
		cout << endl;

		// check the user input
		switch (choice)
		{
			// force on the dam.
		case 1:

			cout << underline << "TO DETERMINE THE FORCE ON THE DAM" << closeunderline << endl << endl;
			do
			{
				// to prompt the user to enter value for D and validate it
				cout << "Enter the depth of the channel (D)" << endl;
				cin >> D;

				if (D <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (D <= 0);

			do
			{
				// to prompt the user to enter value for b and validate it
				cout << "Enter the width of the channel base (b)" << endl;
				cin >> b;

				if (b <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (b <= 0);

			do
			{
				// to prompt the user to enter value for D, b, d, a and validate it
				cout << "Enter the elevation of water above the channel bottom (d)" << endl;
				cin >> d;

				if (d <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (d <= 0);

			do
			{
				// to prompt the user to enter value for a and validate it
				cout << "Enter the distance from edge to bank of the channel (a)" << endl;
				cin >> a;

				if (a <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (a <= 0);

			force = densityOfWater * g * ((a * pow(d, 4)) / (6 * pow(D, 2)) + ((b * pow(d, 2)) / 2));
			cout << "The force exerted on the dam = " << force << "N" << endl << endl;
			break;


			// force for a range of water elevation.
		case 2:

			cout << underline << "TO DETERMINE THE FORCE ON THE DAM FOR A RANGE OF WATER ELEVATIONS" << closeunderline << endl << endl;
			do
			{
				// to prompt the user to enter value for D and validate it
				cout << "Enter the depth of the channel (D)" << endl;
				cin >> D;

				if (D <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (D <= 0);

			do
			{
				// to prompt the user to enter value for b and validate it
				cout << "Enter the width of the channel base (b)" << endl;
				cin >> b;

				if (b <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (b <= 0);

			do
			{
				// to prompt the user to enter value for a and validate it
				cout << "Enter the distance from edge to bank of the channel (a)" << endl;
				cin >> a;

				if (a <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (a <= 0);

			do// to prompt the user to enter d1 , d2 and validate it
			{
				cout << "Enter the lower range of water elevation (d1)" << endl;
				cin >> d1;
				cout << "Enter the higher range of water elevation (d2)" << endl;
				cin >> d2;

				if (d2 <= d1)
				{
					cout << "Error! Please enter a greater value for higher range of water elevation than lower range" << endl;
				}
				if (d1 <= 0 || d2 <= 0)
				{
					cout << "Error! Please enter valid values (strictly greater than 0)" << endl;
				}
			} while (d2 <= d1 || d1 <= 0 || d2 <= 0);


			do// to prompt the user to enter stepsize and validate it
			{
				cout << "Enter the step size" << endl;
				cin >> stepsize;

				if (stepsize <= 0)
				{
					cout << "Error! Please enter a valid value (strictly greater than 0)" << endl;
				}
			} while (stepsize <= 0);

			// printing the heading for the table
			cout << setw(20) << left << "water elevation" << setw(10) << left << "force" << endl;

			// looping to get the values of the table
			for (double sum = d1; sum < d2; sum += stepsize)
			{
				force = densityOfWater * g * ((a * pow(sum, 4)) / (6 * pow(D, 2)) + ((b * pow(sum, 2)) / 2));
				cout << setw(20) << left << sum << setw(10) << left << force << endl;
			}

			// to print the last value of the range
			force = densityOfWater * g * ((a * pow(d2, 4)) / (6 * pow(D, 2)) + ((b * pow(d2, 2)) / 2));
			cout << setw(20) << left << d2 << setw(10) << left << force << endl;

			cout << endl;
			break;

			// exit condition
		case 3:
			cout << "Program terminating ..." << endl;
			repeat = false;
			break;

			// invalid selection
		default:
			cout << "Invalid choice, please enter a valid option (1,2,3)." << endl << endl;
			break;
		}

	}

	return (0);
}
