#include <stdio.h>
/**
 * main- prints the first 50 terms of the fibonacci sequence
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int t1 = 1, t2 = 2;
	int nextterm = t1 + t2;

	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
	}
	return (0);
}
