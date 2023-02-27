#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char array
 */

void rev_string(char *s)
{
	int n, l, z;
	char r;

	for (n = 0; s[n] != '\0'; n++)
		;

	l = n;

	--n;
	for (z = 0; z < l / 2; z++)
	{
		r = s[z];
		s[z] = s[n];
		s[n] = h;
		n--;
	}
}
