//
// Created by Paul Rule on 10/11/22.
//
#include <iostream>

#include "Sample.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    auto sample = Sample(5);

    std::cout << "x=" << sample.getX() << "\n";

    sample.increment();
    sample.increment();

    std::cout << "x=" << sample.getX() << "\n";

    return 0;
}