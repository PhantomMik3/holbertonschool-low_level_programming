#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new hash table or NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int idx;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		table->array[idx] = NULL;

	return (table);
}
