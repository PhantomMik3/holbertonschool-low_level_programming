#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Return: (0) Succesful
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", m);
		}
		if (m != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
