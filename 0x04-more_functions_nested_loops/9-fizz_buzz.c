#include <stdio.h>

/**
 * main- prints from 1- 100
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		++n;
	}
	putchar('\n');
	return (0);
}
