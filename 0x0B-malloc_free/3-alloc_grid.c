#include "main.h"

/**
 * alloc_grid - alllocates memory fro 2-dimensional array of integers
 * @width: width of array
 * @height: height of aray
 * Return: pointer to 2-dim array or NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(arr[j]);
			}
			free(arr);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
