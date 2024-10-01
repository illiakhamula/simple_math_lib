#include "math_lib.h"
#include <algorithm>  

namespace MathLib
{
	bool isEqual(double a, double b, double tolerance)
	{
		return std::abs(a - b) <= tolerance;
	}

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
}

// Comment for stash #2
