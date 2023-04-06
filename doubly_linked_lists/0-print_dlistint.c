#include "lists.h"

/**
 * print_dlistint - prints all elements from list
 * @h: pointer to list
 * Return: quantity of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		number++;
		h = h->next;
	}
	while (h != NULL)
	{
		printf("%u\n", h->n);
		number++;
		h = h->prev;
	}
	return (number);
}
