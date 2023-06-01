#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
