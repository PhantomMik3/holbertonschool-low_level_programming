#include "lists.h"

/**
 * sum_dlistint - function that sums all data
 * @head: pointer to first node
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int addhold = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		addhold += head->n;
		head = head->next;
	}
	return (addhold);
}
