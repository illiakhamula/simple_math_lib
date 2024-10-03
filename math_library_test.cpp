#include <iostream>
#include "math_lib.h"

void testFibonacci() {
    // Тести для функції Fibonacci
    std::cout << "Тестування функції Fibonacci:\n";

    // Тест 1
    if (fibonacci(0) == 0) {
        std::cout << "Тест 1 пройдено: fibonacci(0) = 0\n";
    }
    else {
        std::cout << "Тест 1 не пройдено: fibonacci(0) != 0\n";
    }

    // Тест 2
    if (fibonacci(1) == 1) {
        std::cout << "Тест 2 пройдено: fibonacci(1) = 1\n";
    }
    else {
        std::cout << "Тест 2 не пройдено: fibonacci(1) != 1\n";
    }

    // Тест 3
    if (fibonacci(5) == 5) {
        std::cout << "Тест 3 пройдено: fibonacci(5) = 5\n";
    }
    else {
        std::cout << "Тест 3 не пройдено: fibonacci(5) != 5\n";
    }

    // Тест 4
    if (fibonacci(10) == 55) {
        std::cout << "Тест 4 пройдено: fibonacci(10) = 55\n";
    }
    else {
        std::cout << "Тест 4 не пройдено: fibonacci(10) != 55\n";
    }

    // Тест 5
    if (fibonacci(15) == 610) {
        std::cout << "Тест 5 пройдено: fibonacci(15) = 610\n";
    }
    else {
        std::cout << "Тест 5 не пройдено: fibonacci(15) != 610\n";
    }
}

int main() {
    testFibonacci();
    return 0;
}
