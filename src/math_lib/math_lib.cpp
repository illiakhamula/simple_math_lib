#include "math_lib.h"
#include <cmath>
#include <algorithm>
#include <iostream>

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

    float Square_Root_Newton_Method(int a)
    {
        if (a < 0)
        {
            throw std::invalid_argument("Negative number");
        }

        if (a == 0)
        {
            return 0;
        }

        float x = a;
        float square_root = 0;
        do
        {
            square_root = x - (((x * x) - a) / (2 * x));
            x = square_root;
        }
        while (fabs(sqrtf(a) - square_root) > 0.0001);

        return square_root;
    }
}

