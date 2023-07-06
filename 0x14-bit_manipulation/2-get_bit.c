#include "main.h"

/**
 * get_bit - gets bit at desired index
 * @n: number
 * @index: place of bit to fetch
 * Return: value of bit at index or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (index > 64)
		return (-1);
	tmp = (n >> index);

	return (tmp & 1);
}
