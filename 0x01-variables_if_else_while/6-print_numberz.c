#include <stdio.h>
/**
 * main- prints all single digit numbers base 10 using only putchar
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
