#include "main.h"

/**
 * _strcat - conactenates 2 strings
 * @dest: destination string
 * @src sorce string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		;

	for (c = 0; c < j; i++, c++)
	{
		dest[i] = src[c];
	}

	dest[i] = '\0';

	return (dest)
}
