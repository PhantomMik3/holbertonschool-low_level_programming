#include "variadic_functions.h"

/**
 * print_all - function prints all arguments
 * @format: pointer to arguments
 */
void print_all(const char * const format, ...)
{
	va_list Mg;
	const char *rr, *s;
	int ix, i;
	char c;
	double f;

	va_start(Mg, format);
	ix = 1;
	rr = format;
	while (*rr != '\0')
	{
		if (!ix)
			printf(", ");
	ix = 0;
	switch (*rr)
		{
		case 'c':
			c = (char)va_arg(Mg, int);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(Mg, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(Mg, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(Mg, const char *);
			printf("%s", s == NULL ? "(nil)" : s);
			break;
		default:
			ix = 1;
			break;
		}
	rr++;
	}
	va_end(Mg);
	printf("\n");
}
