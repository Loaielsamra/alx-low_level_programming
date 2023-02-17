#include <stdio.h>
/**
 * main- prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int l = 122;

	while (l >= 97)
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
