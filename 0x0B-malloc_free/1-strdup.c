#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to allocated space or NULL if failed
 */

char *_strdup(char *str)
{
	int i, j;
	char *strdup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	strdup = malloc(sizeof(str) * i);

	if (strdup == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		strdup[j] = str[j];

	return (strdup);
}
