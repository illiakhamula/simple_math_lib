#include "math_lib.h"

int factorial(int n) {
    if (n <= 1) {
        return 1;
      } else {
               return n * factorial (n-1);
    }
}
namespace MathLib
{
	bool isEqual(double a, double b, double tolerance = 1.e-8f)
	{
		return abs(x - y) <= tolerance;
	}
}
