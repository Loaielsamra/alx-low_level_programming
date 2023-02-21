#include "main.h"
/**
 * times_table- prints the time table
 */

void times_table(void)
{
	int i = 0, j = 0, r = i * j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j <= 9 -1)
				printf("%d ", r);
			else
				printf("%d ", r);
		}
	}
}
