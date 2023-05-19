#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	char l = 'a';

	for (; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
