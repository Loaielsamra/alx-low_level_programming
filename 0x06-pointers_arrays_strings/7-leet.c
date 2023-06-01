#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char *letter = "AaEeOoTtLl";
	char *number = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
				str[i] = number[j];
		}
	}

	return (str);
}
