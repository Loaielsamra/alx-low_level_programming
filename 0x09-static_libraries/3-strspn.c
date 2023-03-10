#include "main.h"

/**
 * _strspn - retruns the number of bytes
 * @s: char array string
 * @accept: char arry to check bytes with
 * Return: number of bytes in initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (c);
}
