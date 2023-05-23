#include "main.h"

/**
 * times_table - prints the times table up to 9
 */

void times_table(void)
{
	int i, j, times;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			times = i * j;

			if (times <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) + '0');

			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
