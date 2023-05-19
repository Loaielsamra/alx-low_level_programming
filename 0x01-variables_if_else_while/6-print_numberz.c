#include <stdio.h>
/**
 * main - prints all single-digit numbers without using char
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
