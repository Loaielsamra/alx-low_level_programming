#include "main.h"

/**
 * _islower - finds out if passed character is lowercase
 * @c: passed character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
