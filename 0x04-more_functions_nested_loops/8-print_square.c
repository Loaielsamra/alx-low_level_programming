#include "main.h"

/**
 * print_square- prints a square using hashtags
 * @size: size of square
 */

void print_square(int size)
{
	char h = '#';
	int row = 1;
	int col = 1;

	while (row <= size)
	{
		while (col <= size)
		{
			_putchar(h);
			++col;
		}
		_putchar('\n');
		row++;
	}
}
