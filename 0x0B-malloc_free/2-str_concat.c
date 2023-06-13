#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space, or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *cat;

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	cat = malloc((sizeof(cat) * i) + (sizeof(cat) * j));

	for (k = 0; k < i; k++)
		cat[k] = s1[k];
	for (k = 0; k < j; k++, i++)
		cat[i] = s2[k];

	cat[i] = '\0';

	return (cat);
}

