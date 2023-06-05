#include "main.h"

/**
 * _memset - ses memory to specified value by n bytes
 * @s: character array to set memory of
 * @b: value to set in memory
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
