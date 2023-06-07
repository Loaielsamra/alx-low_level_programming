#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
		++i;

	return (i + _strlen_recursion(s + 1));
}
