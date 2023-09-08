#include "hash_tables.h"

/**
 * hash_table_create - creates/initializes a new hash table
 * @size: size of array
 * Return: address of new table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));

	if (new == NULL || size == 0)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	new->size = size;

	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}

	return (new);
}
