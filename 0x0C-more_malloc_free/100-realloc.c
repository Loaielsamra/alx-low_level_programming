#include "main.h"

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to reallocate memory of
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size to allocate for ptr
 * Return: pointer to new memory or NULL if failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
	}
	m = malloc(new_size);
	if (m == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		m[i] = copy[i];
	free(ptr);
	return (m);
}
