#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate string to newly allocated empty string
 * @str: pointer to string
 * Return: pointer to newly allocated string
 *
 */

char *_strdup(char *str)
{
	char *S;
	int a;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	S = malloc(length);

	if (S == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < length; a++)
	{
		S[a] = str[a];
	}

	return (S);
}
