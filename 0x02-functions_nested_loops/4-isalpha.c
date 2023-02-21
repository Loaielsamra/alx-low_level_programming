#include "main.h"

/**
 * _isalpha- checks if a character is alphabetic
 * @c: character checked
 *
 * Return: 1 if c is alphabetic. 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
