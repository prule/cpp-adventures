#include <iostream>


class Sample {
    int x;

public:
    explicit Sample(int x) {
        Sample::x = x;
    }

    [[nodiscard]] int getX() const {
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

