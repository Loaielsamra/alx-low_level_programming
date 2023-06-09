#include "stdio.h"

/**
 * main - prints all recieved arguements
 * @argc: argument counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
