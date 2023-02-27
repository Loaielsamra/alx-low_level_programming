#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elemnts of array
 * @a: pointer array
 * @n: integer
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	--n;

	for (; n >= 0; n--)
	{
		printf("%d", a[i]);

		if (n > 0)
			printf(", ");

		i++;
	}
	printf("\n");
}
