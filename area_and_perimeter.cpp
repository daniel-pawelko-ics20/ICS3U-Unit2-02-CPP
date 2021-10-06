// Copyright (c) 2021 Daniel Pawelko All rights reserved
//
// Created by: Daniel Pawelko
// Created on: Oct 2021
// This program calculates the area and perimeter of a rectangle
//    with user input dimensions

#include <iostream>

// this function calculates rectangle's area and perimeter
int main() {
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of a rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of a rectangle (mm): ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2 * (length + width);

    // output
    std::cout << "If a rectangle has the dimensions: " << std::endl;
    std::cout << "Length: 5 cm" << std::endl;
    std::cout << "Width: 3 cm" << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
