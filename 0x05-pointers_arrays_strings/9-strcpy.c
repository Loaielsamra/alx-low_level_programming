#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (*dest);
}
