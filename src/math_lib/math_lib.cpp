#include "math_lib.h"
#include <cmath>
#include <algorithm>
#include <stdexcept>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
double findMedian(std::vector<double> numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("Vector is empty");
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }
    // Сортуємо елементи масиву
    std::sort(numbers.begin(), numbers.end());

    int GCD(int a, int b)
    {
		if (b == 0) return a;
		return GCD(b, a % b);
	}
}
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