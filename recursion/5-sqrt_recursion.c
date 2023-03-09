#include "main.h"

int _sqrt_recursion_helper(int n, int i);

/**
 * _sqrt_recursion - natural square root of a number
 * @n: variable number to be evaluated
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	else
		return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - helper function to check if n number is prime
 * @n: variable number to be evaluated
 * @i: divisor
 * Return: 1 if prime, 0 otherwise
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i < n)
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}

	return (-1);
}
