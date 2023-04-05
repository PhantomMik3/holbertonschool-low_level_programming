#include "lists.h"

/**
 * add_node_end - create and add node to the end of list
 * @head: pointer to first node
 * @str: pointer to strings to be printed
 * Return: newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t num = 0;
	list_t *newnode = malloc(sizeof(list_t)), *current;

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (; str[num] != '\0'; num++)
	{
	}

	newnode->len = num;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}

	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

	current->next = newnode;
	}

	return (newnode);
}
