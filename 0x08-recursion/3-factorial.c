#include "main.h"

/**
 * factorial - retursn factorial of given number
 * @n: given number
 * Return: factorial or -1 if n less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
