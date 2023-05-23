#include "main.h"

/**
 * _isalpha - chechs if char is alphabetic
 * @c: passed char
 * Return: 1 if alphabetic, 0 otherwise
 */

int _isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
