#include "main.h"

/**
 * array_range - creates an array of int starting from min 2 max
 * @min: first element
 * @max: last element
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i, n;
	int *m;

	if (min > max)
		return (NULL);

	m = malloc(sizeof(int) * (max- min + 1));

	if (m == NULL)
		return (NULL);

	for (i = 0, n = min; n <= max; i++, n++)
		m[i] = n;

	return (m);
}
