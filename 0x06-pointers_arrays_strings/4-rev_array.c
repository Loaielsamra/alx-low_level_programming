#include "main.h"
/**
 * reverse_array - reverses array 
 * @a: integer array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
