#include "main.h"

/**
 * binary_to_uint - verify string for binary numbers and convert to uns int
 * @b: pointer to string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int digit = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			digit = (digit << 1) | 1;

		else if (b[i] == '0')
			digit <<= 1;
		else
			return (0);
	}

	return (digit);
}
