/*
 *  Author: Matt Johnson
 *  Subject: function definition
 *  Purpose: 
 *  Date: 06/27/2023
 */

#include <iostream>

using namespace std;

const double pi {3.14159};

double calculate_area_circle(double radius) {
    return pi * radius * radius;
}

double calculate_volume_cylinder (double radius, double height) {
//    return pi * radius * radius * height;
    return calculate_area_circle(radius) * height; // reuse function
} 

void area_circle () {
    double radius {};
    
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of a circle with radius " << radius << " is " << calculate_area_circle(radius) << endl;
}

void volume_cylinder () {
    double radius {};
    double height {};
    
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " 
                                                                                                        << height << " is " 
                                                                                                        << calculate_volume_cylinder (radius, height) 
                                                                                                        << endl;
}

int main(void) {
    
    area_circle();
    volume_cylinder();
    
    cout << endl;
    return 0;
}
