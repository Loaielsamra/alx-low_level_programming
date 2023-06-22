#include "variadic_functions.h"

/**
 * sum_them_all - sums all passed integers
 * @n: count of numbers
 * Return: summation of numbers or 0 if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}
