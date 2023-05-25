#include "main.h"

/**
 * _isupper - finds out if passed characterid uppercase
 * @c: passed character
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 122)
		return (1);

	return (0);
}
