#include "main.h"

/**
 * print_array - prints n elements of integer array
 * @a: integer array
 * @n: number of element sto print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
}
