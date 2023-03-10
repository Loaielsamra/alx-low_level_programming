#include <stdio.h>

/**
 * main - prinst all arguemets
 * @argc: arguemnt count
 * @argv: arguemnt string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
