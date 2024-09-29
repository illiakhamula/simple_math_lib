#pragma once

#include <vector>
#include <exception>

namespace MathLib
{
	// Function for addition
	template <typename T>
	T add(T a, T b)
	{
		return a + b; // Change for patch
	}

	// Function for subtraction
	template <typename T>
	T subtract(T a, T b)
	{
		return a - b; // a subtract b
	}

	// Function for multiplication
	template <typename T>
	T multiply(T a, T b)
	{
		return a * b; // a multiply b
	}

	// Function for division
	template <typename T>
	T divide(T a, T b)
	{
		if (b == 0)
		{
			throw "Division by zero is not allowed.";
		}
		return a / b; // a divide b
	}

	bool isEqual(double a, double b, double tolerance = 1.e-8f);

	double median(const std::vector<double>& arr);
}
// That is the comment for stash #1

// That comment for Hook