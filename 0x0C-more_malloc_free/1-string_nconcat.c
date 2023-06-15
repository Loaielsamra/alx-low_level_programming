#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to newly allocated memory
 * containing the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	if (n >= j)
		cat = malloc((sizeof(*s1) * i) + (sizeof(*s2) * j) + 1);
	else
		cat = malloc((sizeof(*s1) * i) + (sizeof(*s2) * n) + 1);

	for (k = 0; k < i; k++)
		cat[k] = s1[k];
	for (k = 0; k < j && k < n; k++, i++)
		cat[i] = s2[k];

	cat[i] = '\0';

	return (cat);
}
