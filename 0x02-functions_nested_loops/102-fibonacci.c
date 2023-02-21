#include <stdio.h>
/**
 * main- prints the first 50 terms of the fibonacci sequence
 *
 * Return: 0 (success)
 */

int main(void)
{
	int t1 = 1, t2 = 2, nextterm = 0;

	printf("%d, %d, ", t1, t2);
	nextterm = t1 + t2;

	while (nextterm <= 20365011074)
	{
		printf("%d, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1+ t2;
	}
	return (0);
}
