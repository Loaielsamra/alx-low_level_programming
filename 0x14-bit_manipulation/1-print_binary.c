#include "main.h"

/**
 * print_binary - print binayr representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int s;
	unsigned long int hold;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	hold = n;
	for (s = 0; (hold >>= 1) > 0; s++)
		;
	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
