#include "main.h"
/**
 * _strcat - contatulates 2 strings
 * @dest: destinations string
 * @src: source string
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0; dest[n] != '\0'; n++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
