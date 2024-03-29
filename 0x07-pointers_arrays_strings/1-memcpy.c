#include "main.h"

/**
 * _memcpy - copies n bytes of src to dest
 * @dest: destination array
 * @src: source array
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
