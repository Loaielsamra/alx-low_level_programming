#include "main.h"
/**
 * print_times_table - prints times table until n
 * @n: limiting number;
 */

void print_times_table(int n)
{
	if ((n < 0) || (n > 15))
	{
		int i, j, times;
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
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
}
