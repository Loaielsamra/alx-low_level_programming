#include "variadic_functions.h"

/**
 * print_all - prints all passed arguements
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list strings;
	char *str, *sep;
	unsigned int i;

	i = 0;
	sep = "";
	va_start(strings, format);

	while (format[i] && format != NULL)
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(strings,  int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(strings, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(strings, double));
				break;
			case 's':
				str = va_arg(strings, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}

		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(strings);
}
