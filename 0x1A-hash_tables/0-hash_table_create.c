#include "hash_tables.h"


/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table
 * Return: pointer to head of new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	table->size = size;

	return (table);
}
