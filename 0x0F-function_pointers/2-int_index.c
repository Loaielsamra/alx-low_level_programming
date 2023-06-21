#include "function_pointers.h"

/**
 * int_index - searches for target value
 * @array: array to search in
 * @size: size of array
 * @cmp: function used to compare values
 * Return: index of desired value, or -1 if error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

