#include <stdio.h>
/**
 * main- prints every letter in the alphabet in lower case
 * Return: 0 (success)
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
