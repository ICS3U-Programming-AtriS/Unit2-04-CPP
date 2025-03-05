// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 5, 2025
// Calculator for the area and circumference of a circle

#include <cmath>
#include <iostream>

int main() {
    // Declare variables
    float radius, area, circumference;

    // Get radius from user
    std::cout << "Enter the radius(cm): ";
    std::cin >> radius;

    // Calculate Area(πr2)
    area = M_PI * (pow(radius, 2));
    // Calculate Circumference(2πr)
    circumference = 2 * M_PI * radius;

    // Display Area [Rounded to 2 decimal places]
    std::cout << "The area is " << round(area * 100) / 100.0;
    std::cout << "cm\u00b2" << std::endl;
    // Display Circumference [Rounded to 2 decimal places]
    std::cout << "The circumference is " << round(circumference * 100) / 100.0;
    std::cout << "cm" << std::endl;
}
