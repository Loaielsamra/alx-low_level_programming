#include "main.h"
/**
 * print_alphabet_x10- prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
