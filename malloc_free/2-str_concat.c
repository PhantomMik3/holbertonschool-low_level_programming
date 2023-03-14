#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - copy and concatenate contents of strings to new one
 * @s1: string pointer
 * @s2: string pointer
 * Return: returns pointer to newlly allocated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
