#include "main.h"

/**
 * factorial - return factorial of given number
 * @n: variable that contains numbers
 * Return: Always 1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
