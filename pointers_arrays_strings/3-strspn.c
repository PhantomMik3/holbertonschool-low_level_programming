#include "main.h"

/**
 * _strspn - length of a prefix substring
 *@s: string being analyzed
 *@accept: from were the bytes must be
 *Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int A, B;

	for (A = 0; s[A]; ++A)
	{
		for (B = 0; accept[B]; ++B)
		{
			if (s[A] == accept[B])
			{
				break;
			}
		}
		if (!accept[B])
		{
			break;
		}
	}
	return (A);
}
