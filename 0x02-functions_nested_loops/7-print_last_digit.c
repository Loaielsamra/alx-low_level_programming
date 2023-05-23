#include "main.h"

/**
 * print_last_digit - returns last digit of a number
 * @n: passed number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	r = _abs(r);

	return (r);
}
