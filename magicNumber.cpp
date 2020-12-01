// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Finding the magic number game


#include <iostream>

int main() {
    // This function sees if the user inputed the magic number

    int const MAGIC_NUMBER = 5;
    float magic_number;
    float win;

    std::cout << "Guess the magic number (0-9)!" << std::endl;

    // Input
    std::cout << "Please enter your guess: ";
    std::cin >> magic_number;

    // Process
    if (magic_number == MAGIC_NUMBER) {
        // Output
        std::cout << "Nice! Your answer is right!" << std::endl;
    } else {
        std::cout << "Oops! Your answer is wrong!" << std::endl;
    }
}
