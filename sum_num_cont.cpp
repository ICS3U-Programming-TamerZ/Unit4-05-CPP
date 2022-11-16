// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Nov.10, 2022
// This program calculates the sum of numbers using a continue statement.

#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int totalInt = 0, numInt, sumInt = 0, wait;
    std::string totalStr = "", numStr, sumStr;

    // Asks the user for the amount of numbers that will be entered
    std::cout << "Enter the amount of numbers to enter: ";
    std::cin >> totalStr;
    std::cout << "\n";

    // Tries casting the total numbers to an integer
    try {
        totalInt = std::stoi(totalStr);
    } catch (const std::exception) {
        std::cout << "You must enter a valid integer.\n";
        std::cout << "Please restart.";
        std::cin >> wait;
    }

    // If statement used to prevent invalid totalInt input
    if (totalInt > 0) {
        while (totalInt > 0) {
            // Asks the user for a number to add to sum
            std::cout << "Enter a number to add to the sum: ";
            std::cin >> numStr;
            std::cout << "\n";

            // Tries casting the number to an integer
            try {
                numInt = std::stoi(numStr);
            } catch (const std::exception) {
                std::cout << "You must enter a valid integer.\n";
                continue;
            }

            // Does not add '+' if last iteration
            if (totalInt == 1) {
                std::cout << "Added " << numInt << " to the sum.\n";
                sumStr += numStr + " ";
                std::cout << sumStr << "\n";
                sumInt += numInt;
                totalInt--;
                continue;

            // Does not decrement totalInt
            } else if (numInt == 0) {
                std::cout << "Added 0 to the sum.\n";
                continue;

            // If the user entered a negative number
            } else if (numInt < 0) {
                std::cout << "You must enter a positive number.\n";
                continue;

            } else {
                std::cout << "Added " << numInt << " to the sum.\n";
                sumStr += numStr + " + ";
                std::cout << sumStr << "\n";
                sumInt += numInt;
                totalInt--;
                continue;
            }
        }

    /*Error message shown if the user entered a negative
    number for totalInt*/
    } else {
        std::cout << "You must input more than 0 numbers to enter\n";
        std::cout << "Please restart\n";
        std::cin >> wait;
    }

    // Prints the equation and sum of the numbers entered
    std::cout << "===========\n";
    std::cout << sumStr << "= ";
    std::cout << sumInt << "\n";
    std::cout << "Sum = " << sumInt << "\n";
}
