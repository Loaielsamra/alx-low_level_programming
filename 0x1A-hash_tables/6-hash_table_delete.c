#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *hold;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			hold = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = hold;
		}
	}

	free(ht->array);
	free(ht);
}
