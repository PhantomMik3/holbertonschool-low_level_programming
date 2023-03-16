#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: variable holding value of s2 length
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int idx;
	unsigned int idx2;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	s = malloc(len1 + n + 1 * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (idx = 0; idx < len1; idx++)
		s[idx] = s1[idx];

	for (idx2 = 0; idx2 < n; idx++, idx2++)
		s[idx] = s2[idx2];

	s[idx] = '\0';
	return (s);
}
