#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-dimensional array
 * @width: value of width
 * @height: value of height
 * Return: a pointer to a 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **arr = (int **)malloc(width * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
