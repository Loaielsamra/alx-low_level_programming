#include <stdio.h>
/**
 * main- prints the alphabet except for q and e
 * Return: 0 (success)
 */
int main(void)
{
	int m = 97;

	while (m <= 122)
	{
		if (m != 'q' && m != 'e')
			putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
