#include <iostream>


class Sample {
    int x;

public:
    Sample(int x) {
        Sample::x = x;
    }

    int getX() {
        return x;
    }

    void increment() {
        Sample::x++;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto sample = Sample(5);

    std::cout << "x=" << sample.getX() << "\n";

    sample.increment();

    std::cout << "x=" << sample.getX() << "\n";

    return 0;
}

