#include "main.h"
#include <stdio.h>
/**
 * times_table- prints the time table
 */

void times_table(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j <= 9 - 1)
				printf("%d, ", i * j);
			else
				printf("%d, ", i * j);
		}
		printf("\n");
	}
}
