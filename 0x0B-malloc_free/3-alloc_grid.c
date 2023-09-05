#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocate memory for a 2D array of integers.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	arr[i] = (int *)malloc(width * sizeof(int));
	if (arr[i] == NULL)
	{
	for (j = 0; j < i; j++)
	free(arr[j]);
	free(arr);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	arr[i][j] = 0;
	}

	return (arr);
}
