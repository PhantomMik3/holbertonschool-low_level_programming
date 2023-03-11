#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: argument counter
 * @argv:  argument array
 * Return: mul result
 */

int main(int argc, char *argv[])
{
	int i;
	int e;
	int m;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	e = atoi(argv[2]);
	m = i * e;
	printf("%d\n", m);
	return (0);
}
