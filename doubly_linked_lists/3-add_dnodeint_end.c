#include "lists.h"

/**
 * add_dnodeint_end - function creates node and sets it to the end of list
 * @head: pointer to node
 * @n: value section of nodes
 * Return: newly created and set node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
		node->prev = temp;
	}
	return (node);
}




