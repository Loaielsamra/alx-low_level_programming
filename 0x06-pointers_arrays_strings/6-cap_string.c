#include "main.h"

/**
 * cap_string - capitalizes words of a string
 * @str: string
 * Return: capitalized str
 */

char *cap_string(char *str)
{
	char *sep = " \t\n,;.!?\"(){}";
	int i, j;
	bool check;

	for (i = 0, check = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
				check = true;
		}

		if (check)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				check = false;
			}
			else if (str[i] >= 65 && str[i] <= 90)
				check = false;
			else if (str[i] >= '0' && str[i] <= '9')
				check = false;
		}
	}

	return (str);
}
