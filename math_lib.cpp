#include "math_lib.h"

// Функція для обчислення числа Фібоначчі рекурсивно
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // базовий випадок
    }
    else if (n == 1) {
        return 1; // базовий випадок
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2); // рекурсивний виклик
    }
}
