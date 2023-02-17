#include <stdio.h>
/**
 * main- prints alphabet in lower case thn upper case
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

	m = 65;

	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
