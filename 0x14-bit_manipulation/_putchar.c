#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character to print
 * Return: on success 1.
 * On error, -1 and err no. is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
