#include "main.h"

/**
 * _strcmp - compares to string
 * @s1: string 1
 * @s2: string 2
 * Return: difference between s2 and s1
 */

int _strcmp(char *s1, char *s2)
{
	int same;

	for (same = 0; s2[same] != '\0' || s1[same] != '\0'; same++)
	{
		if (s1[same] != s2[same])
			return (s1 - s2);
	}

	return (0);
}
