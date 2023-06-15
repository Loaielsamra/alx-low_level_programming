#include "main.h"

/**
 * _calloc - allocates memory for nmemb elements of `size` bytes
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to newly allocated memory, or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size < 1 || nmemb < 1)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	return (m);
}
