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
		return abs(a * b) / GCD(a, b);
    }

    int leastCommonMultiple(int array[], int size) {
		if size == 0 return 1;
		int lcm = array[0];
		for (int i = 1; i < size; i++) lcm = leastCommonMultiple(lcm, array[i]);
		return lcm;
    }

    int GCD(int a, int b)
    {
		if (b == 0) return a;
		return GCD(b, a % b);
	}
}

