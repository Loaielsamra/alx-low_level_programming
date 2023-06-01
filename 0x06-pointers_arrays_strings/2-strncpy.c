#include "main.h"

/**
 * _strncpy - copies string from src to des
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--)
	{
		dest[i] = src[i];
	}	

	return (dest);
}
