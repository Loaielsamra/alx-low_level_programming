#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to new memory, or exit code 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
