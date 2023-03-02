#include "main."
/**
 * cap_string - capitalize all words in the string
 * @str: given string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, c;
	int caught;
	char sep[]= ",;.!?(){}\n\t\" ";

	for (i = 0, caught = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			caught = 1;
		for (c = 0; sep[c] != '\0'; c++)
		{
			if (sep[c] == str[i])
				caught = 1;
		}

		if (caught)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				caught = 0;
			}

			else if (str[i] >= 65 && str[i] <= 90)
				caught = 0;
			else if (str[i] > 47 && str[i] < 58)
				caught = 0;
		}
	}

	return (str);
}
