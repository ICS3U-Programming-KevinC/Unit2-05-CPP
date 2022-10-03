// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 2, 2022
// This program uses scope of variables

#include <iostream>

int main() {
    // variable definition
    int numberOfStudents = 2;
    float width = 32.5;
    float length = 10.0;
    float areaOfRectangle = 0;
    std::string someWords1 = "Hello";
    std::string someWords2 = "World!";
    std::string helloWorld;

    // using assignment statements;
    numberOfStudents = numberOfStudents + 5;
    areaOfRectangle = length * width;
    helloWorld = someWords1 + ", " + someWords2;

    // output
    std::cout << "The number of students is: " << numberOfStudents << std::endl;
    std::cout << "The area of a rectangle is: " << areaOfRectangle << " cm²"
    << std::endl;
    std::cout << helloWorld << std::endl;

    std::cout << "\nDone." << std::endl;
}
