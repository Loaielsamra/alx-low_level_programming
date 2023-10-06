#include "hash_tables.h"

/**
 * hash_table_print - prints the key/value in the order that
 * they appear in the array of hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int comma;

	if (ht == NULL)
		return;

	printf("{");
	comma = 0;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (comma == 0)
				comma = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}

	printf("}\n");
}
