/*
 * Author: Matt Johnson
 * Subject: functions
 * Purpose: explore rand function
 * Date: 06/27/2023
 */

#include <iostream>
#include <cstdlib>	// required for rand()
#include <ctime>	// required for time()

using namespace std;

int main(void) {

	int random_number {};
	size_t count (10);	// number of random numbers to generate
	int min {1};		// lower bound (inclusive)
	int max {6};		// upper bound (inclusive)

	// seed the random number generator
	// if you don't seed the generator you will get the same sequence
	// of random numbers every time
	
	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));	// seeds generator

	for (size_t i {1}; i <= count; ++i) {
		random_number = rand() % max + min; // generates a random number [min, max]
		cout << random_number << endl;
	}

	cout << endl;
	return 0;
}
