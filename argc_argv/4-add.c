#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argv: argument vector
 * @argc: argument counter
 * Return: (0) if succesful
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int num = 0;
		char *num_str = argv[i];
		int j = 0;

	while (num_str[j] != '\0')
	{
		if (num_str[j] >= '0' && num_str[j] <= '9')
		{
			num = num * 10 + (num_str[j] - '0');
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		j++;
	}

	if (argc < 48 && argc > 57)
	{
		printf("0\n");
		return (1);
	}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
