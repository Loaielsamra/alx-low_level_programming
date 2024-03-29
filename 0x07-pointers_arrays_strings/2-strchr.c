#include "main.h"

/**
 * _strchr - locates first occurence of character
 * @s: string
 * @c: desired character
 * Return: pointer to first occurence of c
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

	return (NULL);
}
