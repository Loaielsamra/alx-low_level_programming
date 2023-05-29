#include "main.h"

/**
 * swap_int - swaps values of given ints
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
