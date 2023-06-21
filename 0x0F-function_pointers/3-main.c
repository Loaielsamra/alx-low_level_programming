#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main file to recieve calc
 * @argc: argument counter
 * @argv: arguments passed
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", operation(a, b));

	return (0);
}
