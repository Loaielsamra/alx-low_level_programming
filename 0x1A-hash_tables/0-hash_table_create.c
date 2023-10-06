#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table
 * Return: pointer to head of new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL || size == 0)
		return (NULL);
	table->size = size;

	table->array = malloc(sizeof(void *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
