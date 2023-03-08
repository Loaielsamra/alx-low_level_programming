#include "main.h"

/**
 * is_prime_number - finds our if number is prime
 * @n: number
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n < 4)
		return (1);
	return (hen(n, 2));
}

/**
 * _sqrt - return square root of a number
 * @x: number
 * @i: incrementor
 * Return: square root of x
 */

int _sqrt(int x, int i)
{
	int square;

	square = i * i;

	if (square >= x)
		return (i);
	else
		return (_sqrt(x, ++i));
}

/**
 * hen - helper function
 * @n: number given to is_prime_number
 * @d: incrementer
 * Return: 0 if not prime, 1 if prime
 */

int hen(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (hen(n, ++d));
}
