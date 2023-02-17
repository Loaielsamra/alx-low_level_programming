#include <stdio.h>
/**
 * main- prints every letter in the alphabet in lower case
 * Return: 0 (success)
 */
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
