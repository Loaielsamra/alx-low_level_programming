#include "main.h"

/**
 * _isdigit - cheks if passed parameter is a digit
 * @c: passed characer
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
