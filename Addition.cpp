// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates simple addition with inputs

#include <iostream>

int main() {
    // This function calculates simple addition with inputs
    int first_number;
    int second_number;
    double total;

    // input
    std::cout << "Enter the first number:";
    std::cin >> first_number;
    std::cout << "Enter the second number:";
    std::cin >> second_number;

    // process
    total = first_number + second_number;

    // output
    std::cout << "" << std::endl;
    std::cout << first_number << " + " << second_number << " = " << total
    << std::endl;
    std::cout << "\nDone." << std::endl;
}
