#include "main.h"

/**
 * clear_bit - vlears value of bit at given index
 * @n: number
 * @index: index of the bit to clear (starts from 0)
 * Return: 1 if success, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64 || n == NULL)
		return (-1);

	tmp = 1;
	tmp >>= index;

	if ((*n >> index) & 1)
		*n = tmp ^ *n;

	return (1);
}
