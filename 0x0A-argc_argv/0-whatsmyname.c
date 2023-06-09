#include "stdio.h"

/**
 * main - prints name of 1st arguement
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: 0
 */

int main(int __attribute__((unused))argc, char **argv)
{
	printf("%s/n", argv[0]);

	return (0);
}
