#include "main.h"

/**
 * print_line - print line using _
 * @n: number of _ printed
 */

void print_line(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
