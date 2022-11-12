#include <iostream>
#include "Sample.h"
#include "Controller.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto sample = Sample(5);
    auto controller = Controller(sample);

    std::cout << "x=" << sample.getX() << "\n";

    controller.go();

    std::cout << "x=" << sample.getX() << "\n";

    sample.increment();

    std::cout << "x=" << sample.getX() << "\n";

    return 0;
}
