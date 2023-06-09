#include "stdio.h"

/**
 * main - prints name of 1st arguement
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
