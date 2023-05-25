#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, spc, hash;

	for (i = 1; i <= size; i++)
	{
		for (spc = size - i; spc > 0; spc--)
		{
			_putchar(' ');
		}
		for (hash = i; hash > 0; hash--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size < 1)
		_putchar('\n');
}

