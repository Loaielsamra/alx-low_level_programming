#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned integer
 * @b: char string containing binary number
 * Return: converted number or 0 if faced errors
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, multi;
	unsigned int num;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	num = 0;

	for (j = i - 1, multi = 1; j >= 0; j--, multi *= 2)
	{
		if (b[j] == '1')
			num += multi;
	}

	return (num);
}
