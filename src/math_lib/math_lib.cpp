#include "math_lib.h"
#include <algorithm>
#include <stdexcept>

double findMedian(std::vector<double> numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("Vector is empty");
    }

    // Сортуємо елементи масиву
    std::sort(numbers.begin(), numbers.end());

    size_t size = numbers.size();

    // Якщо кількість елементів непарна
    if (size % 2 != 0) {
        return numbers[size / 2];
    }
    // Якщо кількість елементів парна
    else {
        return (numbers[(size / 2) - 1] + numbers[size / 2]) / 2.0;
    }
}