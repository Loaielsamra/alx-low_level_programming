#include <stdio.h>
/**
 * main- prints all numbers of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d",n);
		n++;
	}
	putchar('\n');
	return (0);
}
