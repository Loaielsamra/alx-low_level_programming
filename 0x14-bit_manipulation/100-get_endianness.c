#include "main.h"

/**
 * get_endianness - chehecs endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
