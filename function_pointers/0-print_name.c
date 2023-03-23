#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name through function pointers
 * @name: pointer containing name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
