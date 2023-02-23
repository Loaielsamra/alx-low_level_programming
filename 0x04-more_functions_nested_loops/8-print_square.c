#include "main.h"

/**
 * print_square- prints a square using hashtags
 * @size: size of square
 */

void print_square(int size)
{
	char h ='#';

	for (int row = 1; row <= size; ++row)
	{
		for (int col = 1; col <= size; ++col)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
}
