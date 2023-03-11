#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments that the program receives
 * @argc: counter
 * @argv: pointer to array of strings
 * Return: (0) if succesfull
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{

		printf("%s\n", argv[c]);
	}

	return (0);
}
