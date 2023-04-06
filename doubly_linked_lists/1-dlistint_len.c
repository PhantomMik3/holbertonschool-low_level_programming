#include "lists.h"

/**
 * dlistint_len - function that traverse through elements of list
 * @h: pointer to the list
 * Return: returns amount of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	while (h != NULL)
	{
		number++;
		h = h->prev;
	}
	return (number);
}
