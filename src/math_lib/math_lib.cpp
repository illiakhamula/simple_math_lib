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
	bool isEqual(double a, double b, double tolerance)
	{
		return abs(a - b) <= tolerance;
	}
}
