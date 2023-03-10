#include "main.h"
/**
 * _islower - checks if c is lowercase
 * @c: the letter to be checked
 *
 * Return: 1 if c is lowercase. 0 othwerwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
