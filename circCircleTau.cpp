// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Feb. 28, 2025
/* This program asks the user for the radius and
then displays the circumference using tau. */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    // Set the tau constant.
    const float TAU = 6.28;

    // Declare the variables.
    float radius, circumference;

    // Get the radius from the user.
    cout << "Enter the radius (cm): ";
    cin >> radius;

    // Calculate the circumference using tau.
    circumference = TAU * radius;

    // Display the circumference to the user.
    cout << "\nCircumference = " << circumference << " cm" << endl;
}
