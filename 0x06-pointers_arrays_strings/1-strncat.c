#include "main.h"

/**
 * _strncat - conactenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int i, j, c;

        for (i = 0; dest[i] != '\0'; i++)
                ;

        for (j = 0; src[j] != '\0'; j++)
                ;

        for (c = 0; c < j && n > 0; i++, c++, n--)
        {
                dest[i] = src[c];
        }

        dest[i] = '\0';

        return (dest);
}
