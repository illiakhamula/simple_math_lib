#include <iostream>
#include "math_lib.h"

int main() {
    int n;
    std::cout << "Введіть номер Фібоначчі: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "Число Фібоначчі для " << n << " дорівнює " << result << std::endl;

    return 0;
}