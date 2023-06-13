#include "main.h"

/**
 * create_array - creates an array based on given size
 * @size: size of array
 * @c: character to initialize array with
 * Return: pointer to array, or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
