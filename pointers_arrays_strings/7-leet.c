#include "main.h"

/**
 * leet - encrypting message
 * @s: string var
 * Return: Always s
 */

char *leet(char *s)
{
	char letters[] = "aeotl";
	char numbers[] = "43071";
	int cd, bc;

	for (cd = 0; s[cd] != '\0'; cd++)
	{
		for (bc = 0; bc < 5; bc++)
		{
			if (s[cd] == letters[bc] || s[cd] == letters[bc] - 32)
			{
				s[cd] = numbers[bc];
			}
		}
	}

	return (s);
}
