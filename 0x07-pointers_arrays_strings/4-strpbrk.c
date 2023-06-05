#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s: string
 * @accept: string
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 * , or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *placeholder;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == *accept)
			return (s);

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				placeholder = &s[i];
				return (placeholder);
			}
		}
	}

	return (NULL);
}
