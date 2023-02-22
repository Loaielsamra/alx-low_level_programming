#include <stdio.h>
/**
 * main - prints 
 * Return: 0 (success)
 */

int main(void)
{
	int sum = 0;
	int i = 3;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++
	}

	printf("%d \n", sum);
	return (0);
}
