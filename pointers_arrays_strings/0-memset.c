/**
 * *_memset - function
 * @s: string
 * @b: character
 * @n: variable
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	char *ptr = s;

		while (a < n){
			*ptr++ = b;
			a++;
		}
		return (s);
}
