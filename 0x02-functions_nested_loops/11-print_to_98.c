#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98 from given number
 * @n: starting number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}

	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}

	printf("\n");
}
