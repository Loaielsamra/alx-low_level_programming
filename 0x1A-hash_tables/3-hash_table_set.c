#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key, and cannot be an empty string
 * @value: the value associated with the key, must be duplicated
 * Return: 1 if succeded, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	int exists;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	exists = key_exists(ht, key, value, index);
	if (exists == 0)
		return (1);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

int key_exists(hash_table_t *ht, const char *key, const char *value, unsigned long int index)
{
	hash_node_t *tmp;

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (0);
		}

		tmp = tmp->next;
	}

	return (1);
}
