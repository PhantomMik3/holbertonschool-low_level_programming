#include "main.h"

/**
 * _pow_recursion - return the value of x to the power of y
 * @x: base var
 * @y: power var
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
	return (1);
	}

	else if (y < 0)
	{
	return (-1);
	}

	else if (y == 1)
	{
		return (x);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
