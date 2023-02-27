#include "main.h"
/**
 * puts2 - prints every other char
 * @str: char array string
 */

void puts2(char *str)
{
	int n, i;

	for (n = 0; str[n] != '\0'; n++)
		;

	for (i = 0; i <= n; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
