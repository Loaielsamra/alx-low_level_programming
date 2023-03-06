#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination to copy into
 * @src: source array
 * @n: no. of elements
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *useless;

	useless = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (useless);
}
