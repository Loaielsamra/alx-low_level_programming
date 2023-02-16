#include <stdio.h>
/**
 * main- prints size of various data types
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
}
