#include "3-calc.h"

/**
 * op_add - addition function
 * @a: integer to be sumed
 * @b: second integer to be sumed
 * Return: result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction function
 * @a: integer to be substracted
 * @b: integer substractor
 * Return: result of substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: integer being divided
 * @b: integer being divided by
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo division function
 * @a: integer being moduled
 * @b: integer being moduled by
 * Return: result of modulo division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
