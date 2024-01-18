#include "search_algos.h"
void printarray(int *array, int start, int end);

/**
 * binary_search - searches array using binary search
 * @array: array to search
 * @size: size of array
 * value: target value
 * Return: index of `value` or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, middle;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printarray(array, low, high);
		printf("\n");
		middle = low + (high - low) / 2;

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return middle;
	}

	return (-1);
}

/**
 * printarray - prints array
 * @low: starting index
 * @high: ending index
 */
void printarray(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");

	for (i = low; i < high; i++)
		printf("%d, ", array[i]);

	printf("%d", array[high]);
}
