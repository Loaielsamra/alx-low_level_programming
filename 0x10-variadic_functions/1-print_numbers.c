#include "variadic_functions.h"

/**
 * print_numbers - prints passed numbers with passed separator
 * @separator: to print between numbers
 * @n: count of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
