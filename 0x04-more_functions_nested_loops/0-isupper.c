#include "main.h"
/**
 * _isupper- finds if c is uppercase
 * @c: variable to be checked
 *
 * Return: 1 id c is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
