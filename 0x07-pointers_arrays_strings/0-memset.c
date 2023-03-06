#include "main.h"

/**
 * _memset - fills memory with const
 * @s: array
 * @b: char
 * @n: unsigned int
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
