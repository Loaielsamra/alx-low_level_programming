#include "main.h"
/**
 * _strncat - concatulates 2 strings using at most n bytes
 * @dest: destination array
 * @src: source array
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int v, i;

	for (v = 0; dest[v] != '\0'; v++)
		;

	for (i = 0; src[i] != '\0' && n > 0; i++)
	{
		dest[v] = src[i];
		n--;
		v++;
	}

	return (dest);
}
