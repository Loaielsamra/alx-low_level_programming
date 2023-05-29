#include "main.h"

/**
 * puts_half - prints second half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	i--;

	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i;

	for (j = n / 2; j < n; j++)
	{
		_putchar(str[j]);
	}
}
