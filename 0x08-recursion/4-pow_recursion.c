#include "main.h"

/**
 * _pow_recursion - retursn value of x power y
 * @x: base value
 * @y: exponent
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, --y));
}
