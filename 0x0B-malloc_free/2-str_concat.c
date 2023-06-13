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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	cat = malloc((sizeof(*s1) * i) + (sizeof(*s2) * j) + 1);

	if (cat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		cat[k] = s1[k];
	for (k = 0; k < j; k++, i++)
		cat[i] = s2[k];

	cat[i] = '\0';

	return (cat);
}
