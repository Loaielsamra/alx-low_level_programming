#include "main.h"

/**
 * flip_bits - calculates the number of bits you would need
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits you would need to flip
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	int num;
	unsigned long int d;

	d = n ^ m;
	num = 0;

	while (d)
	{
		num++;
		d &= (d - 1);
	}

	return (num);
}
