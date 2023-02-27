#include "main.h"
/**
 * puts_half - prints half a string
 * @str: char array string
 */

void puts_half(char *str)
{
	int n, i, l;

	for (l = 0; str[l] != '\0'; l++)
		;

	if (l % 2 != 0)
		n = (l - 1) / 2;
	else
		n = l;

	for (i = n / 2; i <= n; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
