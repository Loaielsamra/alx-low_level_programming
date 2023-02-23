#include "main.h"
/**
 * print_line- prints a line
 * @n: how many underscores to be printed
 */
void print_line(int n)
{
	char l = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
		{
			_putchar(l);
		}
	}
}
