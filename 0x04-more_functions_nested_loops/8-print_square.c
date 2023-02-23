#include "main.h"

/**
 * print_square- prints a square using hashtags
 * @size: size of square
 */

void print_square(int size)
{
	int r, c;

	c = 0;

	if (size < 1)
		_putchar('\n');

	while (c < size)
	{
		r = 0;
		while (r < size)
		{
			_putchar('#');
			r++;
		}
		_putchar('\n');
		c++;
	}
}
