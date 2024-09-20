#pragma once
int factorial(int n);
namespace MathLib
{
	// Function for addition
	template <typename T>
	T add(T a, T b)
	{
		return a + b;
	}
	
	// Function for subtraction
	template <typename T>
	T subtract(T a, T b)
	{
		return a - b;
	}
	
	// Function for multiplication
	template <typename T>
	T multiply(T a, T b)
	{
		return a * b;
	}
	
	// Function for division
	template <typename T>
	T divide(T a, T b)
	{
		if (b == 0)
		{
			throw std::invalid_argument("Division by zero is not allowed.");
		}
		return a / b;
	}
	
	bool isEqual(double a, double b, double tolerance = 0.000000001);
}
