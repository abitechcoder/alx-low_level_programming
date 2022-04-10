#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-dimensional array
 * @width: value of width
 * @height: value of height
 * Return: a pointer to a 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(width * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* dynamically allocate memory for 2D Array  */
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			return (NULL);
		}
	}

	/* assign values to the allocated memory*/
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
