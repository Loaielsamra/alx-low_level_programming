#include <stdio.h>
/**
 * main - prints all single digit numbers from 0
 * Return: always 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
