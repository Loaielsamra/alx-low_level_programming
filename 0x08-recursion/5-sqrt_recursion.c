#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - function to aid sqrt function
 * @c: number to determine if square root
 * @i: incrementer
 * Return: square root if natural, or -1 if not found
 */

int help(int c, int i)
{
	int square;

	square = i * 1;

	if (square == c)
		return (i);
	else if (square < c)
		return (help(c, ++i));
	else
		return (-1);
}
