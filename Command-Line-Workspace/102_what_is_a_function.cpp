/*
 * Author: Matt Johnson
 * Subject: functions
 * Purpose: explore sqrt and pow functions
 * Date: 06/26/2023
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	double num {};

	cout << "Enter a number (double): ";
	cin >> num;

	cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
	cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

	cout << "\nThe sine of " << num << " is: " << sin(num) << endl;
	cout << "The cosine of " << num << " is: " << cos(num) << endl;

	cout << "\nThe ceil of " << num << " is: " << ceil(num) << endl;
	cout << "The floor of " << num << " is: " << floor(num) << endl;

	double power {};

	cout << "\nEnter a power to raise " << num << " to: ";
	cin >> power;

	cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

	cout << endl;
	return 0;
}
