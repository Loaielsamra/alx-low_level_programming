#include "main.h"

/**
 * print_square - prints a square using #
 * @size: size of square
 */

void print_square(int size)
{
	int i, hash;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (size < 1)
		_putchar('\n');
}
