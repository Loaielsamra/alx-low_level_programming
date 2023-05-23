#include "main.h"

/**
 * print_last_digit - returns last digit of a number
 * @n: passed number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;

	r = n % 10;

	if (r < 0)
		r = -r;

	_putchar(r + '0');

	return (r);
}
