#include "main.h"
/**
 * _strncpy - copies string
 * @dest: destination string array
 * @src: source string array
 * @n: number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
