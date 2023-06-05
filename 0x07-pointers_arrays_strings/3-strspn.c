#include "main.h"

/**
 * _strspn - finds no. of bytes in initial segment of s
 * that consist of only of bytes from accept
 * @s: string
 * @accept: string
 * Return: number of bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}

	return (counter);
}
