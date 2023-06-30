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
 *          main actual = 50
 *          param_test formal = 50
 *          param_test formal = 100
 *          main actual = 50
 */

#include <iostream>

using namespace std;

void param_test (int formal) {
    cout << "param_test formal = " << formal << endl;
    formal = 100;
    cout << "param_test formal = " << formal << endl;
}

int main(void) {
    
    int actual {50};
    cout << "main actual = " << actual << endl;
    param_test(actual);
    cout << "main actual = " << actual << endl;
    
    cout << endl;
    return 0;
}
