#include <stdio.h>
/**
 * main - prints all possible combinations if 2 digit numbers
 * aslong as they are different
 * Return: always 0
 */

int main(void)
{
	int n, n2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = '0'; n2 <= '9'; n++)
		{
			if (n < n2)
			{
				putchar(n);
				putchar(n2);
				if (n != '8' || (n == '8' && n2 == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
