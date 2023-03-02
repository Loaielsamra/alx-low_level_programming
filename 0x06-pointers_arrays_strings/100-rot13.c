#include "main.h"
/**
 * rot13 - rotate characters 13 in places in alphabet
 * @str: string
 * Return: rotated str
 */

char *rot13(char *str)
{
	int i;
	char storeh[] = 'NOPQRSTUVWXYZABCDEFGHIJKLM';
	char store1[] = 'nopqrstuvwxyzabcdefghijklm';

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			if (s[i] = (s[i] - 65 > 25))
				store1[s[i] - 97];
			else
				storeh[s[i] - 65];
		}
	}

	return (s);
}
