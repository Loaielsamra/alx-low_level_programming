#include "hash_tables.h"


/**
 * key_index - gives the indexof `key` in array
 * @key: th ekey
 * @size: size of the array of the hash table
 * Return: index of `key` in hsh table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
