#include "main.h"

/**
 * main- prints _putchar
 * Return: 0 (success)
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
	_putchar(a[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
