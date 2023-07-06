#include "main.h"

/**
 * set_bit - sets bit of n at index to 1
 * @n: number
 * @index: index (starting from 0)
 * Return: 1 if success, or -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);
	for (tmp = 1; index > 0; index --, tmp *= 2)
		;
	*n += tmp;

	return (1);
}
