#include "variadic_functions.h"

/**
 * sum_them_all - function that adds all its arguments together
 * @n: const variable integer
 * @...: variable number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	unsigned int hold;

	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);
	for (; i < n; i++)
	{
		hold = va_arg(arg, int);
		sum += hold;
	}

	va_end(arg);
	return (sum);
}
