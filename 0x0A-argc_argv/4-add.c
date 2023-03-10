#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds to +ve numbers
 * @argc: arguement count
 * @argv: arguement string
 * Return: 1 if error , 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *c;
	int num;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &c, 10);

			if (!*c)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", total);
	return (0);
}
