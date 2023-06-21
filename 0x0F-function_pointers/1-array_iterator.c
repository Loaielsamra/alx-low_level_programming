#include "function_pointers.h"

/**
 * array_iterator - does action on each element of array
 * @array: array of type int
 * @size: size of array
 * @action: action to do on element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
