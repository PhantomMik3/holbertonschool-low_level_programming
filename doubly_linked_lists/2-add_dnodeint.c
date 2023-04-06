#include "lists.h"

/**
 * add_dnodeint - function creates andadd node to beginning of list
 * @head: double pointer to
 * @n: data section por nodes
 * Return: newly created node on success
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = malloc(sizeof(dlistint_t));

	if (new_nodo == NULL)
	{
		free(new_nodo);
		return (NULL);
	}
	new_nodo->n = n;
	new_nodo->prev = NULL;
	new_nodo->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_nodo;
	}
	*head = new_nodo;
	return (new_nodo);
}
