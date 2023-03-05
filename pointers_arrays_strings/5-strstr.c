#include "main.h"

/**
 * *_strstr - function that finds first occurence of substring in a string
 * @haystack: string to be analyzed
 * @needle: substring
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
