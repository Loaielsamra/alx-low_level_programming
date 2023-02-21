#include "main.h"
/**
 * print_last_digit- print the last digit of a number
 * @n: the number
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r = -r;

	_putchar(r + '0');
	return (r);
}
