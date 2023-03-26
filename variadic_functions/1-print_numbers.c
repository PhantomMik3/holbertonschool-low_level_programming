#include "variadic_functions.h"

/**
 * print_numbers - print numbers and string if not null
 * @separator: pointer to string
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list arg;

	va_start(arg, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(arg);
}
