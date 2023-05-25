#include "main.h"

/**
 * print_diagonal - prints a diagonal line uding \
 * @n: number of \ printed
 */

void print_diagonal(int n)
{
	int i, spc;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spc = i; spc > 0; spc--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n < 1)
		_putchar('\n');
}
