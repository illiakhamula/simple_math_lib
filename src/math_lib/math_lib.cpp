#include "math_lib.h"
#include <cmath>
#include <algorithm>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
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

    int GCD(int a, int b)
    {
        if (b == 0) return a;
        return GCD(b, a % b);
    }

    int factorial(int n)
    {
        if (n < 0)
        {
            throw std::invalid_argument("Factorial is not defined for negative numbers.");
        }
        int result = 1;
        for (int i = 2; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }

    int fibonacci(int n)
    {
        if (n < 0)
        {
            throw std::invalid_argument("Fibonacci number is not defined for negative numbers.");
        }
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1, result = 0;
        for (int i = 2; i <= n; ++i)
        {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }

    double average(const std::vector<double>& numbers)
    {
        if (numbers.empty())
        {
            throw std::invalid_argument("Array cannot be empty.");
        }
        double sum = 0;
        for (double num : numbers)
        {
            sum += num;
        }
        return sum / numbers.size();
    }
}
