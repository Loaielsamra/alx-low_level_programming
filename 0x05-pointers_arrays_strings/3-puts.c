#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: string
 */

void _puts(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
