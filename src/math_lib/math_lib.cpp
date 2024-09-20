#include "math_lib.h"

namespace MathLib
{
	bool isEqual(double a, double b, double tolerance)
	{
		return abs(a - b) <= tolerance;
	}
}