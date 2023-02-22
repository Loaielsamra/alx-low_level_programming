#include "main.h"

/**
 * largest_number- finds the largest number among 3 numbers
 * @a: number
 * @b: number
 * @c: number
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b)
	{
		if (a >= c)
			largest = a;
		else
			largest = c;
	}

	else
	{
		if (b >= c)
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
