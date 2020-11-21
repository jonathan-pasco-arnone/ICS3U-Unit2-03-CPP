// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program calculates the area and perimeter of a rectangle

#include <iostream>
#include <cmath>

int main() {
    const double TAU = 6.28;
    double radius;
    double circumference;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the circumference of a circle"
    << std::endl;
    std::cout << "" << std::endl;
    std::cout << "If a circle has a radius of ";
    std::cin >> radius;
    circumference = TAU*radius;
    std::cout << "" << std::endl;
    std::cout << "Then the Circumference is " << circumference << std::endl;
}
