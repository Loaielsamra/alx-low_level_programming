#include "main.h"
/**
 * swap_int - swaps a and b
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;

	*a = *b;
	*b = s;
}
