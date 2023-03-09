#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - find prime number
 * @n: numbers to evaluate
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, 5));
}

/**
 * is_prime_helper - identify prime numbers
 * @n: number being evaluated
 * @i: divider
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 6));
}
