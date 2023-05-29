#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, l;


	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;

	for (j = 0, i--; j <= l / 2; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
