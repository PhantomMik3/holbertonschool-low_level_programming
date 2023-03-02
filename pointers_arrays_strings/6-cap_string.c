#include "main.h"
/**
 * *cap_string - cap locks the string
 *Return: string
 *@S: string
 */
char *cap_string(char *S)
{
	int a = 0;

	if (S[a] >= 'a' && S[a] <= 'z')
	{
		S[a] -= 'a' - 'A';
	}
	a++;
		while (S[a] != '\0')
		{
			if (S[a - 1] == ' ' || S[a - 1] == '\t' || S[a - 1] == '\n' ||
				S[a - 1] == ',' || S[a - 1] == ';' || S[a - 1] == '.' ||
				S[a - 1] == '!' || S[a - 1] == '?' || S[a - 1] == '\"' ||
				S[a - 1] == '(' || S[a - 1] == ')' || S[a - 1] == '{' ||
				S[a - 1] == '}')
			{
				if (S[a] >= 'a' && S[a] <= 'z')
				{
					S[a] -= 'a' - 'A';
				}
			}
			a++;
		}
	return (S);
}
