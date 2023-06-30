/*
 *  Author: Matt Johnson
 *  Subject: formal and actual data
 *  Purpose: 
 *  Date: 06/30/2023
 * 
 *  Notes:
 * 
 *          Output is as follows
 * 
 *          result main = 0
 *          result add_numbers = 300
 */

#include <iostream>

using namespace std;

int add_numbers (int, int); // function prototype

int main(void) {
    
    int result {0};
    cout << "result main = " << result << endl;
    
    result = add_numbers(100, 200); // function call
    cout << "result add_numbers = " << result << endl;
    
    cout << endl;
    return 0;
}

int add_numbers (int a, int b) { // function definition
    return a + b;
}
