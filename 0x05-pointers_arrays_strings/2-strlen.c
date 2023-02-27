#include "main.h"
/**
 * _strlen - counts number of characters in string
 * @c: char type pointer
 * Return: string length
 */

int _strlen(char *c)
{
	int n;

	for (n = 0; c[n] != '\0'; n++)
		;

	return (n);
}
