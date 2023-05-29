#include "main.h"

/**
 * rev_string  reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char *tmp;
	int i, j;

	*tmp = *s;

	for (i = 0; s[i] != '\0'; i++)
		;

	i--;

	for (j = 0; j <= i; j++)
	{
		s[j] = tmp[i];
		i--;
	}

	s[j] = '\0';
}
