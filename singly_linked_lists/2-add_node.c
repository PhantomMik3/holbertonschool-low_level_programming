#include "lists.h"

/**
 * add_node - create new node and add it to the beginning of list
 * @head: pointer to the first node
 * @str: pointer to string
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->str = strdup(str);

	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}

	for (; str[count] != '\0' ; count++)
	{
	}

	new_n->len = count;
	new_n->next = *head;
	*head = new_n;
	return (new_n);
}
