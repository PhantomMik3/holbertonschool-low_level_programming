#include "main.h"

/**
 * rev_string - reversea string
 * @s: var
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char t;

	while (s[b++])
	{
	a++;
	}

	for (b = a - 1; b >= a / 2; b--)
	{
		t = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = t;
	}
}

