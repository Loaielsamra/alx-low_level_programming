#include "main.h"

/**
 * _strchr - locate char
 * @s: char array string
 * @c: target char
 *
 * Return: Null if no character
 * or pointer to 1st occurrence of char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);

		s++;
	}

	return (s + 1);
}
