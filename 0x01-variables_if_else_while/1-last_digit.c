#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- prints thae last digit of n
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	printf("Last digit of %d is %d ", n, b);
	if (b > 5)
		printf("and is greater than 5\n");
	else if (b == 0)
		printf("and is 0\n");
	else if (b < 6 && b != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
