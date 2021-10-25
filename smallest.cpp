// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program determines the smallest number

#include <iostream>
#include <array>
#include <random>

template<size_t N>

int Smallest(std::array<int, N> numList) {
    // This function determines the smallest number
    int smallestNum = numList[0];

    for (int num : numList) {
        if (smallestNum > num) {
            smallestNum = num;
        }
    }

    return smallestNum;
}

int main() {
    // This function is the main function
    std::array<int, 10> numberList;
    int randomNum;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  // [0,9]

    // process & output
    std::cout << "Here is a list of random numbers:\n" << std::endl;

    for (int counter = 0; counter < 10; counter++) {
        randomNum = idist(rgen);
        numberList[counter] = randomNum;
        std::cout << "The random number " << counter + 1 << " is: "
        << randomNum << std::endl;
    }

    std::cout << "\nThe smallest number is " << Smallest(numberList)
    << std::endl;

    std::cout << "\nDone." << std::endl;
}
