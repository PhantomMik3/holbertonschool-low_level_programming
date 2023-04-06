#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
