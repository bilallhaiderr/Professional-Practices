#include <iostream>
using namespace std;

int main() {
    int multiplier = 2;

    std::cout << "Multiplication Table of 2:" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << multiplier << " * " << i << " = " << multiplier * i << std::endl;
    }

    return 0;
}
