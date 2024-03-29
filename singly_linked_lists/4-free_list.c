#include "lists.h"

/**
 * free_list - liberate memory used
 * @head: pointer to nodes
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
