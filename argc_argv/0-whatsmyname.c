#include <stdio.h>

/**
 * main - Entry to program that prints its name
 * @argc: counter variable
 * @*argv: vector/array of char variable
 * return: in this case (0)
 */

int main (int argc __attribute__((unused)), char *argv[])

{

	printf("%s\n", argv[0]);

return (0);
}
