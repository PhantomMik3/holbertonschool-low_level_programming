#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Tu papa oite
 * return: always (0) (succesful)
 */

int main(void)

{
    int d;

    for (d = '0'; d <= '9'; d++)
    {
    putchar(d);
    if (d != '9')
    {
    putchar(',');
    putchar(' ');
    }
    }
    putchar('\n');
	return (0);

}
