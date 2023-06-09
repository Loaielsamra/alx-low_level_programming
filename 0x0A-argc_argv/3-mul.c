#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies - 2 given number arguments
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 if succesful, 1 if error
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
