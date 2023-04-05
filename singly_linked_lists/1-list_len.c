#include "lists.h"

/**
 * list_len - verify how many elements are there in a list
 * @h: pointer to list
 * Return: count of elements
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		d++;
		h = h->next;
	}
	return (d);
}
