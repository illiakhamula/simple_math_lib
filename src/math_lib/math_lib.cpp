#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
    // Function to check equality with tolerance
    bool isEqual(double a, double b, double tolerance)
    {
        return std::abs(a - b) <= tolerance;
    }

    // Function to calculate the median of a vector
    double median(const std::vector<double>& arr)
    {
        if (arr.empty())
        {
            throw std::invalid_argument("Array is empty, median cannot be calculated.");
        }

        std::vector<double> sortedArr = arr;
        std::sort(sortedArr.begin(), sortedArr.end());

        size_t size = sortedArr.size();
        if (size % 2 == 0)
        {
            return (sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
        }
        else
        {
            return sortedArr[size / 2];
        }
    }

    // Function for greatest common divisor (GCD)
    int GCD(int a, int b)
    {
        if (b == 0) return a;
        return GCD(b, a % b);
    }

    // Function to check if a number is prime
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

    // Function to calculate least common multiple (LCM)
    int leastCommonMultiple(int a, int b)
    {
        return (a * b) / GCD(a, b);
    }


    double findThirdAngle(double angle1, double angle2){
        return 180.0 - (angle1 + angle2);
    }
}
