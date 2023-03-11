#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passsed to this program
 * @argv: array of arguments
 * @argc: argument counter
 * Return: (0) if succesful
 */

int main(int argc, char *argv[] __attribute__((unused)))
	{
		printf("%d\n", argc - 1);
		return (0);
	}
