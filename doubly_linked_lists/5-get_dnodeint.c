#include "lists.h"

/**
 * get_dnodeint_at_index - find node and return it
 * @head: pointer to the first node
 * @index: contets of node
 * Return: found node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL && i != index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
