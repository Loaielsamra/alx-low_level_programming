#include "variadic_functions.h"

/**
 * print_strings - prints strings passed
 * @separator: printed between strings
 * @n: count of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *single;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		single = va_arg(strings, char *);

		if (single != NULL)
			printf("%s", single);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
