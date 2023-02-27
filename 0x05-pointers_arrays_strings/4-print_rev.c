#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: char array
 */

void print_rev(char *s)
{
	int n;
	int i;

	for (n = 0; s[n] != '\0'; n++)
		;

	for (i = n; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
