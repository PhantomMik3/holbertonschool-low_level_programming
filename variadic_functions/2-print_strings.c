#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: pointer to strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;

	va_list rags;

	va_start(rags, n);

	for (; i < n; i++)
	{
		s = va_arg(rags, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(rags);
	printf("\n");
}
