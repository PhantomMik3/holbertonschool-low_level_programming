#include "main.h"

/**
 * _atoi - conver string into integer
 * @s: variable
 * Return: 0 always
 */

int _atoi(char *s)
{
	int a = 1;
	int b = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			a = -a;
		}
		else if (*s >= '0' && *s <= '9')
		{
			b = b * 10 + (*s - '0');
		}
		else if (b > 0)
		{
			break;
		}
		s++;
	}
	return (a * b);
}
